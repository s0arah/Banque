#include "Compteepargne.h"

Compteepargne::Compteepargne(double tauxinteret) :Compte(proprio,S)
{
	this->tauxinteret = tauxinteret;
}

void Compteepargne::calculinteret() 
{
	MAD resultat = this->S * tauxinteret / 100;

}

void Compteepargne::deposerargent(MAD montant)
{
	this->S = this->S + montant;
}

void Compteepargne::retirerargent(MAD montant)
{
	if (this->S > montant) {
		this->S = this->S - montant;
	}
}

void Compteepargne::transfererargent(MAD montant, Compte C)
{
	if (this->S > montant) {
		this->retirerargent(montant);
		C.deposerargent(montant);
	}
}

Compteepargne::Compteepargne(const Compteepargne& CE)
{
	this->tauxinteret = CE.tauxinteret;
}
