#include <iostream>
#include "Date.h"
#include "Heure.h"
#include "RDV.h"
using namespace std;

int main() {
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