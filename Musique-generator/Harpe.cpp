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
        cout << note << "  -->  Harpe" << endl;
        Beep(2000, get_vitesse());
    }

    if (note == "Re") {
        cout << note << "  -->  Harpe" << endl;
        Beep(2020, get_vitesse());
    }

    if (note == "Mi") {
        cout << note << "  -->  Harpe" << endl;
        Beep(2040, get_vitesse());
    }

    if (note == "Fa") {
        cout << note << "  -->  Harpe" << endl;
        Beep(2060, get_vitesse());
    }

    if (note == "Sol") {
        cout << note << "  -->  Harpe" << endl;
        Beep(2080, get_vitesse());
    }

    if (note == "La") {
        cout << note << "  -->  Harpe" << endl;
        Beep(2100, get_vitesse());
    }

    if (note == "Si") {
        cout << note << "  -->  Harpe" << endl;
        Beep(2120, get_vitesse());
    }
}
