#include "RDV.h"

RDV::RDV() {
    nbParticipants = 0;
    participants = new string[10];
}

RDV::~RDV() {
    delete[] participants;
}

void RDV::saisieLieu() {
    cout << "Entrez le lieu du rendez-vous : ";
    getline(cin, lieu);
}

void RDV::saisieParticipants() {
    cout << "Combien de participants ? ";
    cin >> nbParticipants;
    cin.ignore();
    for (int i = 0; i < nbParticipants; i++) {
        cout << "Nom du participant " << i + 1 << " : ";
        getline(cin, participants[i]);
    }
}

void RDV::saisie() {
    int j, m, a, h, mi;
    cout << "Jour Mois Année : ";
    cin >> j >> m >> a;
    date = Date(j, m, a);
    cout << "Heure Minute : ";
    cin >> h >> mi;
    heure = Heure(h, mi);
    cin.ignore();
    saisieLieu();
    saisieParticipants();
}

void RDV::affiche() const {
    cout << "RDV le ";
    date.affiche();
    cout << " à ";
    heure.affiche();
    cout << " - Lieu : " << lieu << endl;
    cout << "Participants (" << nbParticipants << ") : ";
    for (int i = 0; i < nbParticipants; i++)
        cout << participants[i] << (i < nbParticipants - 1 ? ", " : "");
    cout << endl;
}

void RDV::setDate(const Date& d) { date = d; }
void RDV::setHeure(const Heure& h) { heure = h; }
void RDV::setLieu(const string& l) { lieu = l; }
void RDV::setNombreDeParticipants(int n) { nbParticipants = n; }
void RDV::setParticipants(string* ps) { participants = ps; }
void RDV::setParticipant(int i, string s) { participants[i] = s; }

bool RDV::estCompatibleAvec(const RDV& r) const {
    return !(date.getJour() == r.date.getJour() &&
             date.getMois() == r.date.getMois() &&
             date.getAnnee() == r.date.getAnnee() &&
             heure.getHeure() == r.heure.getHeure() &&
             heure.getMinute() == r.heure.getMinute());
}
