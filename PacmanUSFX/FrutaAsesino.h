#pragma once
#include "Fruta.h"
class FrutaAsesino :
    public Fruta
{
private:
    int disminuirPuntosVida;
    int congelaMovimiento;

public:
    FrutaAsesino(Tile*_tile,Texture* _frutaTextura, int _posicionX, int _posicionY);

    //clonar
    Fruta* clonar();
};

