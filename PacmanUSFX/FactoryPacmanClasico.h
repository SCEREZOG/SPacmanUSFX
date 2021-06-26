#pragma once
#include "Factory.h"
#include "PacmanClasico.h"
#include "MsPAcmanClasico.h"

#include "FantasmaClasico.h"
#include "FrutaClasico.h"
#include "ParedClasico.h"
#include "ParedClasicoAdapter.h"
#include "MonedaClasico.h"
#include "SuperMonedaClasico.h"

class FactoryPacmanClasico :
    public Factory
{
public:
    GameObject* createPacmanInstance(Tile* _tile, TextureManager* _textureManager) override;
    GameObject* createMsPacmanInstance(Tile* _tile, TextureManager* _textureManager) override;
    GameObject* createFantasmaInstance1(Tile* _tile, TextureManager* _textureManager) override;
    GameObject* createFantasmaInstance2(Tile* _tile, TextureManager* _textureManager) override;
    GameObject* createFantasmaInstance3(Tile* _tile, TextureManager* _textureManager) override;
    GameObject* createFantasmaInstance4(Tile* _tile, TextureManager* _textureManager) override;
    GameObject* createParedInstance(Tile* _tile, TextureManager* _textureManager) override;
    GameObject* createFrutaInstance(Tile* _tile, TextureManager* _textureManager) override;
    GameObject* createMonedaInstance(Tile* _tile, TextureManager* _textureManager) override;
    GameObject* createSuperMonedaInstance(Tile* _tile, TextureManager* _textureManager) override;

};

