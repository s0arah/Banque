#pragma once
class MAD
{
private:
	double solde;
	
public:
	MAD();
	MAD(double solde);
	MAD(const MAD& M);
	MAD operator+(const MAD& M);
	MAD operator-(const MAD& M);
	bool operator>(const MAD& M);
	void afficher()const;
	void devise(double valeur);
};

