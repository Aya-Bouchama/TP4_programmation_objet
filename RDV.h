#ifndef RDV_H
#define RDV_H

#include <string>
#include "Date.h"
#include "Heure.h"
using namespace std;

class RDV {
private:
    Date dateRdv;
    Heure heureRdv;
    string lieu;
    int nbParticipants;
    string* participants;

public:
    RDV();
    ~RDV();

    void affiche() const;
    void saisie();
    void saisieParticipants();
    void saisieLieu();

    void setDate(const Date& d);
    void setHeure(const Heure& h);
    void setLieu(const string& l);
    void setNombreDeParticipants(int n);
    void setParticipants(string* ps);
    void setParticipant(int i, const string& s);

    bool estCompatibleAvec(const RDV& r) const;
};

#endif
