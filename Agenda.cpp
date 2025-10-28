#include "Agenda.h"
#include <iostream>
using namespace std;

Agenda::Agenda() : premier(nullptr) {}

Agenda::Agenda(const Agenda& other) : premier(nullptr) {
    NoeudRDV* courant = other.premier;
    while (courant) {
        ajoute(courant->getRDV());
        courant = courant->getSuivant();
    }
}

Agenda::~Agenda() {
    vider();
}

void Agenda::ajoute(const RDV& r) {
    NoeudRDV* nouveau = new NoeudRDV(r, premier);
    premier = nouveau;
}

void Agenda::enleve() {
    if (premier) {
        NoeudRDV* tmp = premier;
        premier = premier->getSuivant();
        delete tmp;
    }
}

void Agenda::affiche() const {
    NoeudRDV* courant = premier;
    int i = 1;
    while (courant) {
        cout << "RDV " << i++ << " : ";
        courant->getRDV().affiche();
        courant = courant->getSuivant();
    }
}

void Agenda::vider() {
    while (premier) enleve();
}
