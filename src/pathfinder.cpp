#include "pathfinder.h"

#include "world.h"
#include "map/area.h"
#include "entity/entity.h"

#include "./AStar/AStar.h"

using namespace Pathfinder;

int gwx, gwy, gz;
Grid *grid;

void InitializeGrid(Area *area, int z) {
  int rows = area->height;
  int cols = area->width;
  Grid::movementType movement = Grid::movementType::EIGHT_DIRECTIONS;
  vector<Node> obstacles;
  for (int i = 0; i < cols; i++)
    for (int j = 0; j < rows; j++) {
      if (!area->GetTile(i, j, z)->walkable || area->GetBlock(i, j, z)->solid)
	      obstacles.push_back(Node(i, j));
    }
  if (grid != nullptr)
    delete grid;
  grid = new Grid(cols, rows, movement, obstacles);
}

std::vector<Point> Pathfinder::GetPath(World *world, int wx, int wy, int z, int startx, int starty, int endx, int endy) {
  if (grid == nullptr || wx != gwx || wy != gwy || z != gz) {
    InitializeGrid(world->GetArea(wx, wy), z);
    gwx = wx; gwy = wy; gz = z;
  }
  Node start = Node(startx, starty);
  Node goal = Node(endx, endy);
  AStar astar(grid);
  vector<Node> nodepath = astar.search(start, goal);
  vector<Point> path;
  for (Node node : nodepath)
    path.push_back({node.getX(), node.getY()});
  return path;
}
