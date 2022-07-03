#include "game.h"

Game* game = nullptr;

int main(int argc, char** argv)
{
	game = new Game();
	
	game -> init("Game Engine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);
	
	while(game -> running())
	{
		game -> handleEvents();
		game -> update();
		game -> render();
	}
	
	game -> clean();
	
    return 0;
}

// https://www.youtube.com/watch?v=YrWQsuDT3NE&list=PLhfAbcv9cehhkG7ZQK0nfIGJC_C-wSLrx&index=4