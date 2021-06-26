#pragma once
#include "Factory.h"
#include "PacmanGalactico.h"
#include "FantasmaGalactico.h"
#include "ParedGalactico.h"
#include "FrutaGalactico.h"
#include "MonedaGalactico.h"
#include "Tile.h"
#include "SuperMonedaGalactico.h"

class FactoryPacmanGalactico :
    public Factory
{
public:
    GameObject* createPacmanInstance(Tile* _tile, TextureManager* _textureManager) override;
    GameObject* createFantasmaInstance1(Tile* _tile, TextureManager* _textureManager) override;
    GameObject* createFantasmaInstance2(Tile* _tile, TextureManager* _textureManager) override;
    GameObject* createFantasmaInstance3(Tile* _tile, TextureManager* _textureManager) override;
    GameObject* createFantasmaInstance4(Tile* _tile, TextureManager* _textureManager) override;
    GameObject* createParedInstance(Tile* _tile, TextureManager* _textureManager) override;
    GameObject* createFrutaInstance(Tile* _tile, TextureManager* _textureManager) override;
    GameObject* createMonedaInstance(Tile* _tile, TextureManager* _textureManager) override;
    GameObject* createSuperMonedaInstance(Tile* _tile, TextureManager* _textureManager) override;

};

