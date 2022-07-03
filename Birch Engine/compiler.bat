@echo off

set SDL_LIB=-lmingw32 -lSDL2main -lSDL2 -lSDL2-static
set GLFW_LIB=-lglfw3 -lkernel32 -luser32 -lgdi32 -lwinspool -lshell32 -lole32 -loleaut32 -luuid -lcomdlg32 -ladvapi32
set GLAD_LIB=-lglad

g++ -c ./src/*.cpp -I ./include
g++ -o ./bin/01 *.o -L ./lib %SDL_LIB%

del *.o