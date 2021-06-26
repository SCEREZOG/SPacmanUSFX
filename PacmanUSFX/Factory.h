#pragma once
#include "GameObject.h"
#include "Tile.h"
#include "TextureManager.h"

class Factory
{
public:
	virtual GameObject* createPacmanInstance(Tile* _tile, TextureManager* _texturaManager) = 0;
	virtual GameObject* createFantasmaInstance1(Tile* _tile, TextureManager* _texturaManager) = 0;
	virtual GameObject* createFantasmaInstance2(Tile* _tile, TextureManager* _texturaManager) = 0;
	virtual GameObject* createFantasmaInstance3(Tile* _tile, TextureManager* _texturaManager) = 0;
	virtual GameObject* createFantasmaInstance4(Tile* _tile, TextureManager* _texturaManager) = 0;
	virtual GameObject* createParedInstance(Tile* _tile, TextureManager* _texturaManager) = 0;
	virtual GameObject* createFrutaInstance(Tile* _tile, TextureManager* _texturaManager) = 0;
	virtual GameObject* createMonedaInstance(Tile* _tile, TextureManager* _texturaManager) = 0;
	virtual GameObject* createSuperMonedaInstance(Tile* _tile, TextureManager* _texturaManager) = 0;
};

