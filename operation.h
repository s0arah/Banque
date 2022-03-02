#pragma once
#include"Date.h"
#include"MAD.h"
#include<vector>
#include"Compte.h"
class Operation
{
private:
	int numero;
	Date date;
	MAD montant;
	int libelle;
	vector<Operation>operation;
public:
	Operation();
	Operation(int numero, Date date, MAD montant, int libelle);
	void ajoutop(Operation O);

};

