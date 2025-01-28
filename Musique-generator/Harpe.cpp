#include "Harpe.hpp"
#include <windows.h>
#include<iostream>

using namespace std;

Harpe::Harpe()
{
}

Harpe::Harpe(string n, int v) : Instrument(n, v)
{
}

void Harpe::Joue(string note, int vitesse)
{
    if (note == "Do") {
        Beep(2000, vitesse);
    }

    if (note == "Re") {
        Beep(2040, vitesse);
    }

    if (note == "Mi") {
        Beep(2080, vitesse);
    }

    if (note == "Fa") {
        Beep(2120, vitesse);
    }

    if (note == "Sol") {
        Beep(2160, vitesse);
    }

    if (note == "La") {
        Beep(2200, vitesse);
    }

    if (note == "Si") {
        Beep(2240, vitesse);
    }
}

void Harpe::AfficheArt()
{
    cout << "Art Harpe" << endl;
}
