#ifndef HEURE_H
#define HEURE_H

class Heure {
private:
    int heures;
    int minutes;
public:
    Heure(int h = 0, int m = 0);
    void affiche() const;
    int getHeures() const;
    int getMinutes() const;
    void setHeures(int h);
    void setMinutes(int m);
};

#endif
