#include "Compte.h"
#include "Client.h"
int numcompt;



Compte::Compte(Client proprio, MAD S)
{
	this->proprio = proprio;
	this->S = S;
	this->numcmpt = Compte::incr();
}

Compte::Compte()
{
}

Compte::Compte(const Compte& C)
{
	this->proprio = C.proprio;
	this->S = C.S;
}





void Compte::deposerargent(MAD montant)
{
	{
		this->S = this->S + montant;

	}
}

void Compte::retirerargent(MAD montant)
{
	if (this->S > montant) {
		this->S = this->S - montant;
	}
}

void Compte::transfererargent(MAD montant, Compte C)
{
	if (this->S > montant) {
		this->retirerargent(montant);
	 C.deposerargent(montant);
	}
}

void Compte::consulter() const
{
}

int Compte::incr()
{
	int cpt=0;
	 cpt ++;
	return  cpt ;
}
