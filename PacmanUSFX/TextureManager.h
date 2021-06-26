#pragma once
#include<map>
#include "Texture.h"
#include "AnimationFrames.h"
using namespace std;

class TextureManager
{
private:
	map<string, Texture*> mapTexturas;
	map<string, AnimationFrames*> mapFramesAnimaciones;

	const string pathPacmanClasico = "Resources/PacMan.bmp";
	const string pathFantasmaClasico1 = "Resources/Blinky.bmp";
	const string pathFantasmaClasico2 = "Resources/Clyde.bmp";
	const string pathFantasmaClasico3 = "Resources/Inkey.bmp";
	const string pathFantasmaClasico4 = "Resources/Pinky.bmp";
	const string pathFrutaClasico = "Resources/Frutas.png";
	const string pathMonedaClasico = "Resources/Monedas02.jpg";
	const string pathSuperMonedaClasico = "Resources/Monedas03.jpg";
	const string pathParedClasico = "Resources/wall.bmp";
	const string pathParedClasicoAdapter = "Resources/wall_sprite.bmp";

	const string pathPacmanGalactico = "Resources/PacMan.bmp";
	const string pathFantasmaGalactico1 = "Resources/fantasmaamarillo.bmp ";
	const string pathFantasmaGalactico2 = "Resources/azul.png ";
	const string pathFantasmaGalactico3 = "Resources/fantasma.png ";
	const string pathFantasmaGalactico4 = "Resources/fantasmarojo.bmp ";
	const string pathFrutaGalactico = "Resources/espacial2.png";
	const string pathMonedaGalactico = "Resources/monedagalactico1.png";
	const string pathSuperMonedaGalactico = "Resources/Monedas03.jpg";
	const string pathParedGalactico = "Resources/WallTextures.png";

	Texture* pacmanClasicoTexture;
	Texture* fantasmaClasico1Texture;
	Texture* fantasmaClasico2Texture;
	Texture* fantasmaClasico3Texture;
	Texture* fantasmaClasico4Texture;
	Texture* frutaClasicoTexture;
	Texture* monedaClasicoTexture;
	Texture* superMonedaClasicoTexture;
	Texture* paredClasicoTexture;
	Texture* paredClasicoAdapterTexture;

	Texture* pacmanGalacticoTexture;
	Texture* fantasmaGalactico1Texture;
	Texture* fantasmaGalactico2Texture;
	Texture* fantasmaGalactico3Texture;
	Texture* fantasmaGalactico4Texture;
	Texture* frutaGalacticoTexture;
	Texture* monedaGalacticoTexture;
	Texture* superMonedaGalacticoTexture;
	Texture* paredGalacticoTexture;
	
	AnimationFrames* framesAnimacionPacmanClasico;
	AnimationFrames* framesAnimacionFantasmaClasico;

public:
	TextureManager();
	~TextureManager();

	Texture* getTextura(string _key) { return mapTexturas[_key]; }
	AnimationFrames* getFramesAnimacion(string _key) { return mapFramesAnimaciones[_key]; }

	void addTextura(string _key, Texture* _textura);
	void addFramesAnimacion(string _key, AnimationFrames* _framesAnimacion);
	void free();
};

