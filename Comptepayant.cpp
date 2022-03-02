#include "Comptepayant.h"

Comptepayant::Comptepayant()
{
}
void Comptepayant::deposerargent(MAD montant)
{
	montant = montant - montant * 0.5;
	this->S = this->S + montant;
}

void Comptepayant::retirerargent(MAD montant)
{
	if (this->S > montant ) {
		montant = montant - montant * 0.5;
		this->S = this->S - montant;
	}
}

void Comptepayant::transfererargent(MAD montant, Compte C)
{
	montant = montant - montant * 0.5;
	if (this->S > montant) {
		this->retirerargent(montant);
		C.deposerargent(montant);
	}
}
