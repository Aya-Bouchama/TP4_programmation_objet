


#include <iostream>
#include "Date.h"
#include "Heure.h"
#include "RDV.h"
using namespace std;

int main() {
    cout << "=== TEST DE LA CLASSE DATE ===" << endl;

    Date d1;                     
    Date d2(29, 2, 2024);        
    Date d3(31, 11, 2025);       

    cout << "Date par défaut : "; d1.affiche(); cout << endl;
    cout << "Date bissextile : "; d2.affiche(); cout << endl;
    cout << "Date invalide : "; d3.affiche(); cout << endl;

    cout << "\nModification de la date : " << endl;
    d1.setJour(31);
    d1.setMois(12);
    d1.setAnnee(2049);
    d1.affiche();
    cout << endl;

    cout << "\n=== TEST DE LA CLASSE HEURE ===" << endl;

    Heure h1;                    
    Heure h2(14, 45);
    Heure h3(25, 90);            

    cout << "Heure par défaut : "; h1.affiche(); cout << endl;
    cout << "Heure valide : "; h2.affiche(); cout << endl;
    cout << "Heure invalide : "; h3.affiche(); cout << endl;

    h2.setHeure(9);
    h2.setMinute(15);
    cout << "Heure modifiée : "; h2.affiche(); cout << endl;

    RDV r1;   
    cout << "=== Saisie du premier rendez-vous ===" << endl;
    r1.saisie();    
    cout << "\n=== Détails du rendez-vous ===" << endl;
    r1.affiche();

    RDV r2;
    cout << "\n=== Saisie d'un deuxième rendez-vous ===" << endl;
    r2.saisie();

    if (r1.estCompatibleAvec(r2))
        cout << "\n Les deux rendez-vous sont compatibles." << endl;
    else
        cout << "\n Les deux rendez-vous sont en conflit (même date et heure)." << endl;

    return 0;
}


