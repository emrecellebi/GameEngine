@echo off

set LWJGL=../lib/lwjgl.jar;../lib/lwjgl_util.jar;../lib/slick-util.jar;
set CLASS_PATH=-cp ../bin;%LWJGL%

java.exe %CLASS_PATH% enginTester.MainGameLoop %*