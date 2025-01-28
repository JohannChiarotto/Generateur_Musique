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

void Piano::Joue(string note)
{
    if (note == "Do") {
        Beep(3000, get_vitesse());
    }

    if (note == "Re") {
        Beep(3020, get_vitesse());
    }

    if (note == "Mi") {
        Beep(3040, get_vitesse());
    }

    if (note == "Fa") {
        Beep(3060, get_vitesse());
    }

    if (note == "Sol") {
        Beep(3080, get_vitesse());
    }

    if (note == "La") {
        Beep(3100, get_vitesse());
    }

    if (note == "Si") {
        Beep(3120, get_vitesse());
    }
}
