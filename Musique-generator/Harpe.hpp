#ifndef HARPE
#define HARPE

#include "Instrument.hpp"
#include <iostream>

using namespace std;

class Harpe : public Instrument {
public:
    Harpe();
    Harpe(string n);
    void Joue(string n, int vitesse);
    void AfficheArt();
};

#endif
