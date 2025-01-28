#include "Piano.hpp"
#include <Windows.h>
#include <iostream>

using namespace std;

Piano::Piano()
{
}

Piano::Piano(string n, int v) : Instrument(n,v)
{
}

void Piano::Joue(string note, int vitesse)
{
    if (note == "Do") {
        Beep(3000, vitesse);
    }

    if (note == "Re") {
        Beep(3040, vitesse);
    }

    if (note == "Mi") {
        Beep(3080, vitesse);
    }

    if (note == "Fa") {
        Beep(3120, vitesse);
    }

    if (note == "Sol") {
        Beep(3160, vitesse);
    }

    if (note == "La") {
        Beep(3200, vitesse);
    }

    if (note == "Si") {
        Beep(3240, vitesse);
    }
}
