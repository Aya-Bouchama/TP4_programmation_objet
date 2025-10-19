#ifndef RDV_H
#define RDV_H

#include <iostream>
#include <string>
#include "Date.h"
#include "Heure.h"
using namespace std;

class RDV {
private:
    Date date;
    Heure heure;
    string lieu;
    int nbParticipants;
    string *participants;

public:
    RDV();
    ~RDV();

    void saisie();
    void saisieLieu();
    void saisieParticipants();
    void affiche() const;

    void setDate(const Date& d);
    void setHeure(const Heure& h);
    void setLieu(const string& l);
    void setNombreDeParticipants(int n);
    void setParticipants(string* ps);
    void setParticipant(int i, string s);

    bool estCompatibleAvec(const RDV& r) const;
};

#endif
