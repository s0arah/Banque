#pragma once
#include"MAD.h"
#include"Client.h"
class Compte
{
protected:
	static int numcmpt;
	MAD S;
	Client proprio;
public:
	Compte();
	Compte(const Compte &C);
	Compte(Client proprio, MAD S);
	virtual void deposerargent(MAD montant);
	virtual void retirerargent(MAD montant);
	virtual void transfererargent(MAD montant, Compte C);
	 virtual void consulter()const;
	static int incr();

};

