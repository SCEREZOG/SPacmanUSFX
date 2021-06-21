#include "FrutaAsesino.h"

FrutaAsesino::FrutaAsesino(Tile* _tile, Texture* _frutaTextura, int _posicionX, int _posicionY):
	Fruta( _frutaTextura,_posicionX, _posicionY){
	tipoFruta = Fruta_Asesino;
}

//metodo clonar
Fruta* FrutaAsesino::clonar() {
	return new FrutaAsesino(*this);
}


