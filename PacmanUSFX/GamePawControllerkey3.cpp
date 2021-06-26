#include "GamePawControllerkey3.h"
GamePawControllerkey3::GamePawControllerkey3() :GamePawnController()
{
}

void GamePawControllerkey3::handleEvent(SDL_Event* event)
{
	if (event->type == SDL_KEYDOWN && event->key.repeat == 0) {
		switch (event->key.keysym.sym)
		{
			// Move up
		case SDLK_t:
			direccionSiguiente = MOVE_UP; break;

			// Move down
		case SDLK_g:
			direccionSiguiente = MOVE_DOWN; break;

			// Move left
		case SDLK_f:
			direccionSiguiente = MOVE_LEFT; break;

			// Move right
		case SDLK_h:
			direccionSiguiente = MOVE_RIGHT; break;
		}
	}
}
