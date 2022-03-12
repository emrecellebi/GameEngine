@echo off

set LWJGL=../lib/lwjgl.jar;../lib/jinput.jar;
set CLASS_PATH=-d ../bin -cp %LWJGL%

javac.exe %CLASS_PATH% enginTester/MainGameLoop.java
jar.exe cfvm ../GameEngine.jar META-INF/MANIFEST.MF -C ../bin/ .