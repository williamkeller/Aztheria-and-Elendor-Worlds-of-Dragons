Objs = draw_funcs.obj entity.obj fov.obj game_fio.obj game.obj pathfinder.obj     \
       settings.obj world_gen.obj world.obj AStar.obj Grid.obj Node.obj map.obj   \
	     createworld_state.obj loadworld_state.obj mainmenu_state.obj area.obj      \
	     play_state.obj state_funcs.obj perlin_generator.obj map_menu.obj menu.obj  \
	     button.obj panel_status.obj biome_gen.obj main.obj block.obj dung_gen.obj  \
	     block_components.obj block_builders.obj map_helper.obj block_systems.obj   \
       

SRC_DIR = ../src

TARGET  = ../bin/A-and-E-Worlds-of-Dragons.exe

all: $(TARGET)

$(TARGET):$(Objs)
 link /out:$@ /SUBSYSTEM:WINDOWS /DEBUG:FULL /LIBPATH:"C:\Program Files\boost_1_73_0\stage\lib" ..\libs\BearLibTerminal.lib $**

# src

draw_funcs.obj:$(SRC_DIR)/draw_funcs.cpp $(SRC_DIR)/draw_funcs.h $(SRC_DIR)/base.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/draw_funcs.cpp

fov.obj:$(SRC_DIR)/fov.c $(SRC_DIR)/fov.h
  cl /c /Z7 /MT /O2 /EHsc $(SRC_DIR)/fov.c
  
game_fio.obj:$(SRC_DIR)/game_fio.cpp $(SRC_DIR)/game_fio.h $(SRC_DIR)/entity/entity.h $(SRC_DIR)/game.h $(SRC_DIR)/world.h       \
             $(SRC_DIR)/map/area.h $(SRC_DIR)/map/map.h $(SRC_DIR)/map/dungeon.h $(SRC_DIR)/base.h $(SRC_DIR)/map_objects/tile.h \
             $(SRC_DIR)/map_objects/block.h $(SRC_DIR)/map_objects/block_components.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/game_fio.cpp

game.obj:$(SRC_DIR)/game.cpp $(SRC_DIR)/game.h $(SRC_DIR)/entity/entity.h $(SRC_DIR)/world.h $(SRC_DIR)/map/area.h \
         $(SRC_DIR)/map/map.h $(SRC_DIR)/settings.h $(SRC_DIR)/base.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/game.cpp

main.obj:$(SRC_DIR)/main.cpp $(SRC_DIR)/game_states/mainmenu_state.h $(SRC_DIR)/game.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/main.cpp

pathfinder.obj:$(SRC_DIR)/pathfinder.cpp $(SRC_DIR)/pathfinder.h $(SRC_DIR)/entity/entity.h $(SRC_DIR)/world.h \
               $(SRC_DIR)/map/area.h $(SRC_DIR)/map/map.h $(SRC_DIR)/AStar/AStar.h  $(SRC_DIR)/AStar/Grid.h    \
               $(SRC_DIR)/AStar/Node.h $(SRC_DIR)/base.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/pathfinder.cpp

settings.obj:$(SRC_DIR)/settings.cpp $(SRC_DIR)/settings.h $(SRC_DIR)/map/area.h $(SRC_DIR)/map/map.h $(SRC_DIR)/entity/entity.h \
             $(SRC_DIR)/fov.h $(SRC_DIR)/base.h $(SRC_DIR)/map_objects/block.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/settings.cpp

world.obj:$(SRC_DIR)/world.cpp $(SRC_DIR)/world.h $(SRC_DIR)/game.h $(SRC_DIR)/entity/entity.h $(SRC_DIR)/map/area.h \
          $(SRC_DIR)/map/map.h $(SRC_DIR)/base.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/world.cpp

# src/AStar

AStar.obj:$(SRC_DIR)/AStar/AStar.cpp $(SRC_DIR)/AStar/AStar.h $(SRC_DIR)/AStar/Grid.h $(SRC_DIR)/AStar/Node.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/AStar/AStar.cpp

Grid.obj:$(SRC_DIR)/AStar/Grid.cpp $(SRC_DIR)/AStar/Grid.h $(SRC_DIR)/AStar/Node.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/AStar/Grid.cpp

Node.obj:$(SRC_DIR)/AStar/Node.cpp $(SRC_DIR)/AStar/Node.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/AStar/Node.cpp

# src/entity

entity.obj:$(SRC_DIR)/entity/entity.cpp $(SRC_DIR)/game.h $(SRC_DIR)/entity/entity.h $(SRC_DIR)/world.h $(SRC_DIR)/map/area.h   \
           $(SRC_DIR)/map/map.h $(SRC_DIR)/base.h $(SRC_DIR)/fov.h $(SRC_DIR)/map_objects/block.h $(SRC_DIR)/map_objects/tile.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/entity/entity.cpp


# src/game_states

createworld_state.obj:$(SRC_DIR)/game_states/createworld_state.cpp $(SRC_DIR)/game_states/createworld_state.h          \
                      $(SRC_DIR)/game_states/play_state.h $(SRC_DIR)/game_states/state_funcs.h $(SRC_DIR)/draw_funcs.h \
                      $(SRC_DIR)/base.h $(SRC_DIR)/game.h $(SRC_DIR)/gamestate.h $(SRC_DIR)/world_gen/world_gen.h      \
                      $(SRC_DIR)/gui/button.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/game_states/createworld_state.cpp

loadworld_state.obj:$(SRC_DIR)/game_states/loadworld_state.cpp $(SRC_DIR)/game_states/loadworld_state.h $(SRC_DIR)/game.h \
                    $(SRC_DIR)/game_states/play_state.h $(SRC_DIR)/game_states/state_funcs.h $(SRC_DIR)/draw_funcs.h      \
                    $(SRC_DIR)/base.h $(SRC_DIR)/gamestate.h $(SRC_DIR)/game_fio.h $(SRC_DIR)/gui/button.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/game_states/loadworld_state.cpp

mainmenu_state.obj:$(SRC_DIR)/game_states/mainmenu_state.cpp $(SRC_DIR)/game_states/mainmenu_state.h $(SRC_DIR)/gui/button.h \
                   $(SRC_DIR)/game_states/createworld_state.h $(SRC_DIR)/game_states/loadworld_state.h $(SRC_DIR)/game.h    \
                   $(SRC_DIR)/draw_funcs.h $(SRC_DIR)/base.h $(SRC_DIR)/gamestate.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/game_states/mainmenu_state.cpp

play_state.obj:$(SRC_DIR)/game_states/play_state.cpp $(SRC_DIR)/game_states/play_state.h $(SRC_DIR)/draw_funcs.h           \
               $(SRC_DIR)/base.h $(SRC_DIR)/game.h $(SRC_DIR)/gamestate.h $(SRC_DIR)/game_fio.h $(SRC_DIR)/entity/entity.h \
               $(SRC_DIR)/world.h $(SRC_DIR)/map/area.h $(SRC_DIR)/map/map.h $(SRC_DIR)/map/dungeon.h $(SRC_DIR)/gui/menu.h \
               $(SRC_DIR)/pathfinder.h $(SRC_DIR)/map_objects/block.h $(SRC_DIR)/map_objects/tile.h $(SRC_DIR)/gui/button.h \
               $(SRC_DIR)/gui/panel_status.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/game_states/play_state.cpp

state_funcs.obj:$(SRC_DIR)/game_states/state_funcs.cpp $(SRC_DIR)/game_states/state_funcs.h $(SRC_DIR)/game.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/game_states/state_funcs.cpp

# src/map

area.obj:$(SRC_DIR)/map/area.cpp $(SRC_DIR)/map/area.h $(SRC_DIR)/map/dungeon.h $(SRC_DIR)/map/map.h $(SRC_DIR)/entity/entity.h \
         $(SRC_DIR)/base.h $(SRC_DIR)/map_objects/block.h $(SRC_DIR)/map_objects/tile.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/map/area.cpp

map.obj:$(SRC_DIR)/map/map.cpp $(SRC_DIR)/map/map.h $(SRC_DIR)/base.h $(SRC_DIR)/map_objects/block.h \
        $(SRC_DIR)/map_objects/tile.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/map/map.cpp

map_helper.obj:$(SRC_DIR)/map/map_helper.cpp $(SRC_DIR)/map/map_helper.h $(SRC_DIR)/map/area.h $(SRC_DIR)/base.h \
               $(SRC_DIR)/map_objects/block.h $(SRC_DIR)/map_objects/tile.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/map/map_helper.cpp

# src/world_gen

biome_gen.obj:$(SRC_DIR)/world_gen/biome_gen.cpp $(SRC_DIR)/world_gen/biome_gen.h $(SRC_DIR)/game.h $(SRC_DIR)/entity/entity.h \
              $(SRC_DIR)/world.h $(SRC_DIR)/map/area.h $(SRC_DIR)/map/map.h $(SRC_DIR)/base.h $(SRC_DIR)/map_objects/block.h   \
              $(SRC_DIR)/map_objects/tile.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/world_gen/biome_gen.cpp

dung_gen.obj:$(SRC_DIR)/world_gen/dung_gen.cpp $(SRC_DIR)/world_gen/dung_gen.h $(SRC_DIR)/game.h $(SRC_DIR)/entity/entity.h  \
             $(SRC_DIR)/world.h $(SRC_DIR)/map/area.h $(SRC_DIR)/map/map.h $(SRC_DIR)/map/dungeon.h $(SRC_DIR)/base.h        \
             $(SRC_DIR)/map_objects/block.h $(SRC_DIR)/map_objects/tile.h $(SRC_DIR)/map_objects/block_builders.h            \
             $(SRC_DIR)/map_objects/block_components.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/world_gen/dung_gen.cpp

perlin_generator.obj:$(SRC_DIR)/world_gen/perlin_generator.cpp $(SRC_DIR)/world_gen/perlin_generator.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/world_gen/perlin_generator.cpp

world_gen.obj:$(SRC_DIR)/world_gen/world_gen.cpp $(SRC_DIR)/world_gen/world_gen.h $(SRC_DIR)/world_gen/perlin_generator.h     \
              $(SRC_DIR)/game.h $(SRC_DIR)/entity/entity.h $(SRC_DIR)/world.h $(SRC_DIR)/map/area.h $(SRC_DIR)/map/map.h      \
              $(SRC_DIR)/map/map_helper.h $(SRC_DIR)/map/dungeon.h $(SRC_DIR)/base.h $(SRC_DIR)/map_objects/block.h           \
              $(SRC_DIR)/map_objects/tile.h $(SRC_DIR)/map_objects/block_components.h $(SRC_DIR)/map_objects/block_builders.h \
              $(SRC_DIR)/map_objects/block_systems.h $(SRC_DIR)/world_gen/biome_gen.h $(SRC_DIR)/world_gen/dung_gen.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/world_gen/world_gen.cpp

# src/map_objects

block_components.obj:$(SRC_DIR)/map_objects/block_components.cpp $(SRC_DIR)/map_objects/block_components.h $(SRC_DIR)/base.h \
                     $(SRC_DIR)/entity/entity.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/map_objects/block_components.cpp

block_systems.obj:$(SRC_DIR)/map_objects/block_systems.cpp $(SRC_DIR)/map_objects/block_systems.h $(SRC_DIR)/world.h        \
                  $(SRC_DIR)/map_objects/block.h $(SRC_DIR)/map_objects/tile.h $(SRC_DIR)/base.h $(SRC_DIR)/entity/entity.h \
                  $(SRC_DIR)/map/area.h $(SRC_DIR)/map/map_helper.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/map_objects/block_systems.cpp
  
block_builders.obj:$(SRC_DIR)/map_objects/block_builders.cpp $(SRC_DIR)/map_objects/block_builders.h $(SRC_DIR)/base.h \
                   $(SRC_DIR)/map_objects/block_components.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/map_objects/block_builders.cpp

block.obj:$(SRC_DIR)/map_objects/block.cpp $(SRC_DIR)/map_objects/block.h $(SRC_DIR)/map_objects/block_components.h \
          $(SRC_DIR)/base.h 
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/map_objects/block.cpp

# src/menus

map_menu.obj:$(SRC_DIR)/menus/map_menu.cpp $(SRC_DIR)/menus/map_menu.h $(SRC_DIR)/game.h $(SRC_DIR)/draw_funcs.h \
             $(SRC_DIR)/entity/entity.h $(SRC_DIR)/world.h $(SRC_DIR)/map/area.h $(SRC_DIR)/base.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/menus/map_menu.cpp

# src/gui

button.obj:$(SRC_DIR)/gui/button.cpp $(SRC_DIR)/gui/button.h $(SRC_DIR)/game.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/gui/button.cpp
  
menu.obj:$(SRC_DIR)/gui/menu.cpp $(SRC_DIR)/gui/menu.h $(SRC_DIR)/game.h $(SRC_DIR)/base.h $(SRC_DIR)/draw_funcs.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/gui/menu.cpp
  
panel_status.obj:$(SRC_DIR)/gui/panel_status.cpp $(SRC_DIR)/gui/panel_status.h $(SRC_DIR)/game.h $(SRC_DIR)/draw_funcs.h \
                 $(SRC_DIR)/entity/entity.h $(SRC_DIR)/world.h $(SRC_DIR)/base.h
  cl /c /std:c++17 /Z7 /MT /O2 /I"C:\Program Files\boost_1_73_0" /EHsc $(SRC_DIR)/gui/panel_status.cpp