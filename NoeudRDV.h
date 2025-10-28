#ifndef NOEUDRDV_H
#define NOEUDRDV_H

#include "RDV.h"

class NoeudRDV {
private:
    RDV rdv;
    NoeudRDV* suivant;

public:
    NoeudRDV(const RDV& r);
    NoeudRDV(const RDV& r, NoeudRDV* s);

    RDV getRDV() const;
    void setRDV(const RDV& r);

    NoeudRDV* getSuivant() const;
    void setSuivant(NoeudRDV* s);
};

#endif