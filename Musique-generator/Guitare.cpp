#include "Guitare.hpp"
#include <windows.h>
#include <iostream>
using namespace std;

Guitare::Guitare()
{
}

Guitare::Guitare(string n, int v) : Instrument(n,v)
{
}

void Guitare::Joue(string note, int vitesse)
{
    if (note == "Do") {
        Beep(1000, vitesse);
    }

    if (note == "Re") {
        Beep(1040, vitesse);
    }

    if (note == "Mi") {
        Beep(1080, vitesse);
    }

    if (note == "Fa") {
        Beep(1120, vitesse);
    }

    if (note == "Sol") {
        Beep(1160, vitesse);
    }

    if (note == "La") {
        Beep(1200, vitesse);
    }

    if (note == "Si") {
        Beep(1240, vitesse);
    }
}
