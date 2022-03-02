#pragma once
#include "Compte.h"
#include "MAD.h"
#include <vector>
#include"operation.h"
#include"Compteepargne.h"

class Comptecourant :
    public Compte
{
    private:
        MAD decouvert;
        Operation op;
public:
    Comptecourant(MAD decouvert, Operation op);
    Comptecourant(const Comptecourant& CC);
   
    void deposerargent(MAD montant)override;
    void retirerargent(MAD montant)override;
  
     void transfererargent(MAD montant, Compteepargne CC);



};

