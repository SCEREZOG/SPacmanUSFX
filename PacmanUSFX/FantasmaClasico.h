#pragma once
#include "Fantasma.h"
class FantasmaClasico :
    public Fantasma
{

protected:

    /*Tile* tileActual;
    Tile* tileSiguiente;*/

public:

    FantasmaClasico(Tile* _tile, Texture* _fantasmaClasicoTextura);
    /*Tile* getTile() { return tileActual; }
    Tile* getTileSiguiente() { return tileSiguiente; }*/
    //void setTile(Tile* _tileNuevo);
    //void setTileSiguiente(Tile* _tileNuevoSiguiente) { tileSiguiente = _tileNuevoSiguiente; }


    
    Fantasma* clone();

};

