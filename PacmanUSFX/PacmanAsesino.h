
#pragma once
#include <iostream>
#include <string>
#include <algorithm>

#include <SDL.h>

#include "GameObject.h"
#include "Texture.h"
#include "Tile.h"
#include "TileGraph.h"
#include "Moneda.h"
#include "Fantasma.h"
#include "Fruta.h"
#include "MoveDirection.h"
#include "TextureManager.h" 
#include "Pacman.h"


class PacmanAsesino :
    public Pacman
{
    //constructores y destructores
    PacmanAsesino(Tile* _tile, Texture* _texturaPacmanClasico, int _posicionX, int _posicionY, int _velocidad);
   // ~PacmanAsesino();


    //metodos varios
    bool tratarDeMover(MoveDirection _direccionNueva);

};

