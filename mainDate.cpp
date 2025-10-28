#include <iostream>
#include "Date.h"
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
    
    return 0;
}