#pragma once
#include "Compte.h"
class Compteepargne :
    public Compte
{
private:
    double tauxinteret;
public:
    Compteepargne(double tauxinteret);
    void calculinteret();
    void deposerargent(MAD montant)override;
    void retirerargent(MAD montant)override;
    void transfererargent(MAD montant, Compte C);
    Compteepargne(const Compteepargne& CE);
};

