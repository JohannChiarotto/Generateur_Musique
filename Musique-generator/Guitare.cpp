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
        cout << note << "  -->  Guitare" << endl;
        Beep(1000, get_vitesse());
    }

    if (note == "Re") {
        cout << note << "  -->  Guitare" << endl;
        Beep(1020, get_vitesse());
    }

    if (note == "Mi") {
        cout << note << "  -->  Guitare" << endl;
        Beep(1040, get_vitesse());
    }

    if (note == "Fa") {
        cout << note << "  -->  Guitare" << endl;
        Beep(1060, get_vitesse());
    }

    if (note == "Sol") {
        cout << note << "  -->  Guitare" << endl;
        Beep(1080, get_vitesse());
    }

    if (note == "La") {
        cout << note << "  -->  Guitare" << endl;
        Beep(1100, get_vitesse());
    }

    if (note == "Si") {
        cout << note << "  -->  Guitare" << endl;
        Beep(1120, get_vitesse());
    }
}
