#include "game.h"

Game::Game()
{}

Game::~Game()
{}

void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
{
	int flags = 0;
	if(fullscreen) flags = SDL_WINDOW_FULLSCREEN;
	if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		printf("Subsystems Initialised!...\n");
		
		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if(window) printf("Window Created!\n");
		
		renderer = SDL_CreateRenderer(window, -1, 0);
		if(renderer)
		{
			SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
			printf("Renderer Created!\n");
		}
		
		isRunning = true;
	}
	else
	{
		isRunning = false;
	}
}

void Game::handleEvents()
{
	SDL_Event event;
	SDL_PollEvent(&event);
	
	switch(event.type)
	{
		case SDL_QUIT:
			isRunning = false;
		break;
	}
}

void Game::update()
{
	cnt++;
	printf("\r%d", cnt);
}

void Game::render()
{
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
}

void Game::clean()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	printf("\nGame Cleaned\n");
}