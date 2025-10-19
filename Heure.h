#ifndef HEURE_H
#define HEURE_H

#include <iostream>
using namespace std;

class Heure {
private:
    int heure;
    int minute;

public:
    
    Heure();

    
    Heure(int h, int m);

   
    void affiche() const;

   
    int getHeure() const;
    int getMinute() const;

  
    void setHeure(int h);
    void setMinute(int m);
};

#endif
