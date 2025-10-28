#include <iostream>
#include "Heure.h"
using namespace std;

int main() {
    cout << "\n=== TEST DE LA CLASSE HEURE ===" << endl;

    Heure h1;                    
    Heure h2(14, 45);
    Heure h3(25, 90);            

    cout << "Heure par défaut : "; h1.affiche(); cout << endl;
    cout << "Heure valide : "; h2.affiche(); cout << endl;
    cout << "Heure invalide : "; h3.affiche(); cout << endl;

    h2.setHeures(9);
    h2.setMinutes(15);
    cout << "Heure modifiée : "; h2.affiche(); cout << endl;
    return 0;
}