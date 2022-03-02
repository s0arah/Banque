#include "MAD.h"
#include<iostream>
using namespace std;

MAD::MAD()
{
	this->solde = 0;
}

MAD::MAD(double solde)
{
	this->solde = solde;
}

MAD::MAD(const MAD& M)
{
	this->solde = M.solde;
}

MAD MAD::operator+(const MAD& M)
{
	this->solde = this->solde + M.solde;
		
	
	return this->solde;
}

MAD MAD::operator-(const MAD& M)
{
	this->solde = this->solde - M.solde;
	return this->solde;
}

bool MAD::operator>(const MAD& M)
{
	if (this->solde > M.solde) {
		return true;
	}
	else return false;
}

void MAD::afficher() const
{
	cout << this->solde << endl;
}

void MAD::devise(double valeur)
{
	
		valeur = valeur + valeur * 0.10;

}
