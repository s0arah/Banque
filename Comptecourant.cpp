#include "Comptecourant.h"

Comptecourant::Comptecourant(MAD decouvert, Operation op):Compte(proprio,S)
{
	this->decouvert = decouvert>100;
	this->op = op;
}

Comptecourant::Comptecourant(const Comptecourant& CC)
{
	this->decouvert = CC.decouvert;
	this->op = CC.op;
}

void Comptecourant::deposerargent(MAD montant)
{
	this->S = this->S + montant;
}

void Comptecourant::retirerargent(MAD montant)
{
	if (this->S > montant && this->S-montant>decouvert) {
		this->S = this->S - montant;
	}
}

void Comptecourant::transfererargent(MAD montant, Compteepargne CC)
{
	if (this->S > montant) {
		this->retirerargent(montant);
		CC.deposerargent(montant);
	}
}