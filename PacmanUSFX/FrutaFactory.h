#pragma once
//#include "fruta.h"
#include "FrutaAsesino.h"
#include "FrutaClasico.h"
#include "FrutaGalactico.h"
#include "TextureManager.h"


class FrutaFactory
{
private:
	static Fruta* tipoClasicoFruta;

	static Fruta* tipoGalacticoFruta;

	static Fruta* tipoAsesinoFruta;


	
public:

	static void inicializar() {

		tipoClasicoFruta = new FrutaClasico(nullptr, (new TextureManager())->getTexture("fruta_clasico"), 275, 275);

		tipoGalacticoFruta = new FrutaGalactico(nullptr, (new TextureManager())->getTexture("fruta_galactico"), 300, 300);

		tipoAsesinoFruta = new FrutaAsesino(nullptr, (new TextureManager())->getTexture("fruta_asesino"), 25, 25);


	}

	static Fruta* getTipoClasicoFruta();

	static Fruta* getTipoGalacticoFruta();

	static Fruta* getTipoAsesinoFruta();





};

