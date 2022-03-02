#include "operation.h"

Operation::Operation()
{
}

Operation::Operation(int numero, Date date, MAD montant, int libelle)
{
	this->numero = numero;
	this->date =  date;
	this->montant = montant;
	this->libelle=libelle;
	this->operation = vector<Operation>();
}

void Operation::ajoutop(Operation O)
{
	this->operation.push_back(O);
}
