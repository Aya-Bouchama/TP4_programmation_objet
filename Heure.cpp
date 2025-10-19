#include "Heure.h"

Heure::Heure() {
    heure = 0;
    minute = 0;
}

Heure::Heure(int h, int m) {
    if (h >= 0 && h < 24 && m >= 0 && m < 60) {
        heure = h;
        minute = m;
    } else {
        heure = 0;
        minute = 0;
    }
}

void Heure::affiche() const {
    if (heure < 10)
        cout << "0";
    cout << heure << "h";

    if (minute < 10)
        cout << "0";
    cout << minute;
}


int Heure::getHeure() const {
    return heure;
}

int Heure::getMinute() const {
    return minute;
}

void Heure::setHeure(int h) {
    if (h >= 0 && h < 24)
        heure = h;
}

void Heure::setMinute(int m) {
    if (m >= 0 && m < 60)
        minute = m;
}
