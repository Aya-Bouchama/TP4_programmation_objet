#include <iostream>
#include "Agenda.h"
using namespace std;

int main() {
    cout << "===== TEST DE LA CLASSE AGENDA =====" << endl;
    Agenda monAgenda;
    cout << "\nAgenda créé. Contenu initial :" << endl;
    monAgenda.affiche();

    
    RDV r1;
    r1.setDate(Date(28, 10, 2025));
    r1.setHeure(Heure(10, 30));
    r1.setLieu("Centrale Marseille");
    r1.setNombreDeParticipants(2);
    r1.setParticipant(0, "Aya");
    r1.setParticipant(1, "Sofia");

    RDV r2;
    r2.setDate(Date(30, 10, 2025));
    r2.setHeure(Heure(9, 0));
    r2.setLieu("Bibliothèque");
    r2.setNombreDeParticipants(1);
    r2.setParticipant(0, "Youssef");

    RDV r3;
    r3.setDate(Date(5, 11, 2025));
    r3.setHeure(Heure(16, 15));
    r3.setLieu("Salle 204");
    r3.setNombreDeParticipants(3);
    r3.setParticipant(0, "Aya");
    r3.setParticipant(1, "Sara");
    r3.setParticipant(2, "Anas");

    
    cout << "\nAjout de 3 rendez-vous..." << endl;
    monAgenda.ajoute(r1);
    monAgenda.ajoute(r2);
    monAgenda.ajoute(r3);

    cout << "\n--- Contenu de l’agenda ---" << endl;
    monAgenda.affiche();

    cout << "\nSuppression du premier RDV..." << endl;
    monAgenda.enleve();

    cout << "\n--- Contenu de l’agenda après suppression ---" << endl;
    monAgenda.affiche();

   
    cout << "\nVidage complet de l’agenda..." << endl;
    monAgenda.vider();

    cout << "\n--- Agenda vide ---" << endl;
    monAgenda.affiche();

    cout << "\n===== FIN DU TEST =====" << endl;
    return 0;
}
