#pragma once
#include <vector>
#include "Compte.h"
#include <iostream>
#include <string.h>
using namespace std;
class Client
{
private:
	string nom;
	string prenom;
	int num_cin;
	vector <Compte> nbrcompte;
public:
	Client();
	Client(string nom,string prenom,int num_cin);
	void ajoutcompte(Compte C);
	void afficherClient()const;
	
};

