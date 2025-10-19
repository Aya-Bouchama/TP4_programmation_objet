#include "Date.h"

bool Date::checkDate(int j, int m, int a) {
    return (j >= 1 && j <= 31) && (m >= 1 && m <= 12) && (a >= 2000 && a <= 2050);
}

Date::Date(int j, int m, int a) {
    if (checkDate(j, m, a)) {
        jour = j;
        mois = m;
        annee = a;
    } else {
        jour = 1;
        mois = 1;
        annee = 2000;
    }
}

void Date::affiche() const {
    cout << jour << "/" << mois << "/" << annee;
}

int Date::getJour() const { return jour; }
int Date::getMois() const { return mois; }
int Date::getAnnee() const { return annee; }

void Date::setJour(int j) { if (checkDate(j, mois, annee)) jour = j; }
void Date::setMois(int m) { if (checkDate(jour, m, annee)) mois = m; }
void Date::setAnnee(int a) { if (checkDate(jour, mois, a)) annee = a; }
