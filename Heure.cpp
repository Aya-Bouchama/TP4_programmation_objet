#include "Heure.h"
#include <iostream>
using namespace std;

Heure::Heure(int h, int m) {
    if (h >= 0 && h < 24 && m >= 0 && m < 60) {
        heures = h; minutes = m;
    } else {
        heures = 0; minutes = 0;
    }
}

void Heure::affiche() const {
    cout << (heures < 10 ? "0" : "") << heures << ":"
         << (minutes < 10 ? "0" : "") << minutes;
}

int Heure::getHeures() const { return heures; }
int Heure::getMinutes() const { return minutes; }
void Heure::setHeures(int h) { if (h >= 0 && h < 24) heures = h; }
void Heure::setMinutes(int m) { if (m >= 0 && m < 60) minutes = m; }
