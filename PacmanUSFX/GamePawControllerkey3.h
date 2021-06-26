#pragma once
#include "GamePawnController.h"
class GamePawControllerkey3 :
	public GamePawnController
{
	public:
		GamePawControllerkey3();
		void handleEvent(SDL_Event* event);
};

