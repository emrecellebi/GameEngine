@echo off

set LWJGL=../lib/lwjgl.jar;../lib/jinput.jar;../lib/slick-util.jar;
set CLASS_PATH=-cp ../bin;%LWJGL%

java.exe %CLASS_PATH% enginTester.MainGameLoop %*