#pragma once
#include <SDL.h>
#include "GameActor.h"
#include "Texture.h"
#include "TileGraph.h"


    enum PoderSuperMoneda {
    SUPERMONEDA_NINGUNO,
   SUPERMONEDA_CRECIMIENTO,
    SUPERMONEDA_COMER,
    SUPERMONEDA_VELOCIDAD,
    PODERSUPERMONEDA_SALTO
    };



class SuperMoneda :
    public GameActor {
protected:
    int valor;
    PoderSuperMoneda tipoPoderSuperMoneda;
    int tiempoPoderSuperMoneda;
    GameObjectType returType() { return SUPERMONEDA; }
public:
    SuperMoneda(Tile* _tile, Texture* _textura);

    int getValor() { return valor; }
    PoderSuperMoneda getTipoPoderSuperMoneda() { return tipoPoderSuperMoneda; }
    int getTiempoPoderMoneda() { return tiempoPoderSuperMoneda; }

    void setValor(int _valor) { valor = _valor; }
    void setTipoPoderSuperMoneda(PoderSuperMoneda _poderSuperMoneda) { tipoPoderSuperMoneda = _poderSuperMoneda; }
    void setTiempoPoderSuperMoneda(int _tiempoPoderSuperMoneda) { tiempoPoderSuperMoneda = _tiempoPoderSuperMoneda; }
    void setTileActual(Tile* _tileNuevo);

    void deleteGameObject() override;
    void handleEvent(SDL_Event* event) {};

};;

