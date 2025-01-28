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

void Guitare::Joue(string note)
{
    if (note == "Do") {
        Beep(1000, get_vitesse());
    }

    if (note == "Re") {
        Beep(1020, get_vitesse());
    }

    if (note == "Mi") {
        Beep(1040, get_vitesse());
    }

    if (note == "Fa") {
        Beep(1060, get_vitesse());
    }

    if (note == "Sol") {
        Beep(1080, get_vitesse());
    }

    if (note == "La") {
        Beep(1100, get_vitesse());
    }

    if (note == "Si") {
        Beep(1120, get_vitesse());
    }
}
