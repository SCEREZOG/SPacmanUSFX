//#pragma once
//#include <iostream>
//#include <vector>
//#include <SDL.h>
//
//#include "GameObject.h"
//#include "Texture.h"
//#include "TileGraph.h"
//#include "Tile.h"
//
//using namespace std;
//
//enum TIPO_FRUTA {
//	TIPO_FRUTA_GUINDA,
//	TIPO_FRUTA_PLATANO,
//	TIPO_FRUTA_NARANJA,
//	TIPO_FRUTA_FRUTILLA,
//	TIPO_FRUTA_MAXIMO
//};
////Ss
//class Fruta : public GameObject {
//protected:
//
//	TIPO_FRUTA tipoFruta;
//
//	int tiempoVisible;
//	int tiempoInvisible;
//
//	int contadorTiempoVisible;
//	int contadorTiempoInvisible;
//	int numeroFrutaVisible;
//
//	Tile* tileActual;
//public:
//
//	//vector<Texture*>frutaTexture;
//	//Constructores y destructores
//	Fruta(Tile* _tile, Texture* _frutaTexture, int _posicionX, int _posicionY);
//	//~Fruta();
//
//	//Metodos accesores
//	
//	TIPO_FRUTA getTipoFruta() { return tipoFruta; }
//	int getTiempoVisible() { return tiempoVisible; }
//	int getTiempoInvisible() { return tiempoInvisible; }
//	Tile* getTileActual() { return tileActual; }
//
//	void setTipoFruta(TIPO_FRUTA _tipoFruta) { tipoFruta = _tipoFruta; }
//	void setTiempoVisible(int _tiempoVisible) { tiempoVisible = _tiempoVisible; }
//	void setTiempoInvisible(int _tiempoInvisible) { tiempoInvisible = _tiempoInvisible; }
//	void setTileActual(Tile* _tileNuevo);
//
//	// Metodos varios
//
//	// Manejador de eventos de la fruta
//	//void handleEvent(SDL_Event& e);
//
//	// Mostrar u ocultar la fruta
//	void update() {};
//	// Renderizar imagen fruta
//	//void render();
//};
//
//
#pragma once
#include <iostream>
#include <vector>
#include <SDL.h>
#include "Tile.h"
#include "GameObject.h"
#include "TileGraph.h"

using namespace std;

enum TIPO_FRUTA {
	TIPO_FRUTA_GUINDA,
	TIPO_FRUTA_FRUTILLA,
	TIPO_FRUTA_NARANJA,
	TIPO_FRUTA_PLATANO,
	TIPO_FRUTA_MANZANA,
	TIPO_FRUTA_MAXIMO
};


class Fruta : public GameObject
{
private:
	TIPO_FRUTA tipoFruta;

	int tiempoVisible;
	int tiempoNoVisible;

	int contadorTiempoVisible;
	int contadorTiempoNoVisible;
	int numeroFrutaVisible;

public:
	//Constructores y destructores
	Fruta(Texture* _frutaTextura, int _posicionX, int _posicionY);
	//~Fruta();

	//Metodos accesores

	TIPO_FRUTA getTipoFruta() { return tipoFruta; }
	int getTiempoVisible() { return tiempoVisible; }
	int getTiempoNoVisible() { return tiempoNoVisible; }

	void setTipoFruta(TIPO_FRUTA _tipoFruta) { tipoFruta = _tipoFruta; }
	void setTiempoVisble(int _tiempoVisible) { tiempoVisible = _tiempoVisible; }
	void setTiempoNoVisble(int _tiempoNoVisible) { tiempoNoVisible = _tiempoNoVisible; }

	// Metodos varios

	// Manejador de eventos de la fruta
	//void handleEvent(SDL_Event& e);

	// Mostrar u ocultar fruta
	void update();
	// Renderizar imagen fruta
	//void render();

};

