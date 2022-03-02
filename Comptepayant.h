#pragma once
#include "Compte.h"
#include"Compteepargne.h"
class Comptepayant :
    public Compte
{
private:
public:
    Comptepayant();
    void deposerargent(MAD montant)override;
    void retirerargent(MAD montant)override;

    void transfererargent(MAD montant, Compte C)override;
};

