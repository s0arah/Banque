#include "Client.h"


Client::Client()
{

}

Client::Client(string nom, string prenom, int num_cin)
{
	this->nom = nom;
	this->prenom = prenom;
	this->num_cin = num_cin;
	this->nbrcompte = vector<Compte>();
}

void Client::ajoutcompte(Compte C)
{
	this->nbrcompte.push_back(C);
}

void Client::afficherClient() const
{
	cout <<  this->nom << endl ;
	cout << this->prenom << endl;
	cout << this->num_cin<< endl;

}