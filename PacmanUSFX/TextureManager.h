#pragma once
#include<map>
#include "Texture.h"
using namespace std;

class TextureManager
{
private:
	map<string, Texture*> mapTexturas;

	//pacman clasico
	const string pathPacmanClasico = "Resources/PacMan.bmp";
	const string pathFantasmaClasico1 = "Resources/Blinky.bmp";
	const string pathFantasmaClasico2 = "Resources/Clyde.bmp";
	const string pathFantasmaClasico3 = "Resources/Inkey.bmp";
	const string pathFantasmaClasico4 = "Resources/Pinky.bmp";
	const string pathFrutaClasico = "Resources/Frutas.png";
	const string pathMonedaClasico = "Resources/Monedas02.jpg";
	const string pathSuperMonedaClasico = "Resources/Monedas03.jpg";
	const string pathParedClasico = "Resources/WallTextures.png";

	//pacman galactico
	const string pathPacmanGalactico = "Resources/PacMan.bmp";
	const string pathFantasmaGalactico1 = "Resources/fantasmaamarillo.bmp ";
	const string pathFantasmaGalactico2 = "Resources/azul.png ";
	const string pathFantasmaGalactico3 = "Resources/fantasma.png ";
	const string pathFantasmaGalactico4 = "Resources/fantasmarojo.bmp ";
	const string pathFantasmaGalactico5 = "Resources/Pacmanultimo.bmp ";
	const string pathFrutaGalactico = "Resources/espacial2.png";
	const string pathMonedaGalactico = "Resources/monedagalactico1.png";
	const string pathSuperMonedaGalactico = "Resources/Monedas03.jpg";
	const string pathParedGalactico = "Resources/WallTextures.png";


	//pacman asesino
	const string pathPacmanAsesino = "Resources/PacMan.bmp";
	const string pathFantasmaAsesino1 = "Resources/fantasmaamarillo.bmp ";
	const string pathFantasmaAsesino2 = "Resources/azul.png ";
	const string pathFantasmaAsesino3 = "Resources/fantasma.png ";
	const string pathFantasmaAsesino4 = "Resources/fantasmarojo.bmp ";
	const string pathFantasmaAsesino5 = "Resources/Pacmanultimo.bmp ";
	const string pathFrutaAsesino = "Resources/fruta01.png";
	const string pathMonedaAsesino = "Resources/monedagalactico1.png";
	const string pathSuperMonedaAsesino = "Resources/Monedas03.jpg";
	const string pathParedAsesino = "Resources/wall.bmp";


	//pacman texture clasico
	Texture* pacmanClasicoTexture;
	Texture* fantasmaClasico1Texture;
	Texture* fantasmaClasico2Texture;
	Texture* fantasmaClasico3Texture;
	Texture* fantasmaClasico4Texture;
	Texture* frutaClasicoTexture;
	Texture* monedaClasicoTexture;
	Texture* superMonedaClasicoTexture;
	Texture* paredClasicoTexture;

	//pacman texture galactico
	Texture* pacmanGalacticoTexture;
	Texture* fantasmaGalactico1Texture;
	Texture* fantasmaGalactico2Texture;
	Texture* fantasmaGalactico3Texture;
	Texture* fantasmaGalactico4Texture;
	Texture* frutaGalacticoTexture;
	Texture* monedaGalacticoTexture;
	Texture* superMonedaGalacticoTexture;
	Texture* paredGalacticoTexture;
	

	//pacman texture asesino
	Texture* pacmanAsesinoTexture;
	Texture* fantasmaAsesino1Texture;
	Texture* fantasmaAsesino2Texture;
	Texture* fantasmaAsesino3Texture;
	Texture* fantasmaAsesino4Texture;
	Texture* frutaAsesinoTexture;
	Texture* monedaAsesinoTexture;
	Texture* superMonedaAsesinoTexture;
	Texture* paredAsesinoTexture;



public:
	TextureManager();
	~TextureManager();

	Texture* getTexture(string _key) { return mapTexturas[_key]; }
	void addTexture(string _key, Texture* _texture);
	void free();


};

