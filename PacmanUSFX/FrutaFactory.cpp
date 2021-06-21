#include "FrutaFactory.h"
 

Fruta* FrutaFactory::tipoClasicoFruta = nullptr;

Fruta* FrutaFactory::tipoGalacticoFruta = nullptr;

Fruta* FrutaFactory::tipoAsesinoFruta = nullptr;



Fruta* FrutaFactory::getTipoClasicoFruta() {
	return tipoClasicoFruta->clonar();
}
 
Fruta* FrutaFactory::getTipoGalacticoFruta() {
	return tipoGalacticoFruta->clonar();
}

Fruta* FrutaFactory::getTipoAsesinoFruta() {
	return tipoAsesinoFruta->clonar();
}
