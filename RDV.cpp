#include "RDV.h"
#include <iostream>
using namespace std;

RDV::RDV() {
    nbParticipants = 0;
    participants = new string[10];
}

RDV::~RDV() {
    delete[] participants;
}

void RDV::affiche() const {
    cout << "Date: "; 
    dateRdv.affiche();
    cout << " | Heure: "; 
    heureRdv.affiche();
    cout << " | Lieu: " << lieu;
    cout << " | Participants (" << nbParticipants << "): ";

    if (nbParticipants > 0) {
        for (int i = 0; i < nbParticipants; i++) {
            cout << participants[i];
            if (i < nbParticipants - 1)
                cout << ", ";
        }
    } else {
        cout << "Aucun";
    }
    cout << endl;
}


void RDV::saisieLieu() {
    cout << "Entrez le lieu: ";
    getline(cin, lieu);
}

void RDV::saisieParticipants() {
    cout << "Nombre de participants (max 10): ";
    cin >> nbParticipants;
    cin.ignore();
    for (int i = 0; i < nbParticipants; i++) {
        cout << "Participant " << i + 1 << ": ";
        getline(cin, participants[i]);
    }
}

void RDV::saisie() {
    int j, m, a, h, min;
    cout << "Entrez la date (jour mois annee): ";
    cin >> j >> m >> a;
    cin.ignore();
    setDate(Date(j, m, a));

    cout << "Entrez l'heure (hh mm): ";
    cin >> h >> min;
    cin.ignore();
    setHeure(Heure(h, min));

    saisieLieu();
    saisieParticipants();
}

void RDV::setDate(const Date& d) { dateRdv = d; }
void RDV::setHeure(const Heure& h) { heureRdv = h; }
void RDV::setLieu(const string& l) { lieu = l; }
void RDV::setNombreDeParticipants(int n) { nbParticipants = n; }
void RDV::setParticipants(string* ps) { participants = ps; }
void RDV::setParticipant(int i, const string& s) { if (i >= 0 && i < 10) participants[i] = s; }

bool RDV::estCompatibleAvec(const RDV& r) const {
    return !(dateRdv.getJour() == r.dateRdv.getJour() &&
             dateRdv.getMois() == r.dateRdv.getMois() &&
             dateRdv.getAnnee() == r.dateRdv.getAnnee() &&
             heureRdv.getHeures() == r.heureRdv.getHeures() &&
             heureRdv.getMinutes() == r.heureRdv.getMinutes());
}


