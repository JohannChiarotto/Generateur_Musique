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

void Harpe::Joue(string note)
{
    if (note == "Do") {
        Beep(2000, get_vitesse());
    }

    if (note == "Re") {
        Beep(2020, get_vitesse());
    }

    if (note == "Mi") {
        Beep(2040, get_vitesse());
    }

    if (note == "Fa") {
        Beep(2060, get_vitesse());
    }

    if (note == "Sol") {
        Beep(2080, get_vitesse());
    }

    if (note == "La") {
        Beep(2100, get_vitesse());
    }

    if (note == "Si") {
        Beep(2120, get_vitesse());
    }
}
