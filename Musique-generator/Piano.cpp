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
        cout << note << "  -->  Piano" << endl;
        Beep(3000, get_vitesse());
    }

    if (note == "Re") {
        cout << note << "  -->  Piano" << endl;
        Beep(3020, get_vitesse());
    }

    if (note == "Mi") {
        cout << note << "  -->  Piano" << endl;
        Beep(3040, get_vitesse());
    }

    if (note == "Fa") {
        cout << note << "  -->  Piano" << endl;
        Beep(3060, get_vitesse());
    }

    if (note == "Sol") {
        cout << note << "  -->  Piano" << endl;
        Beep(3080, get_vitesse());
    }

    if (note == "La") {
        cout << note << "  -->  Piano" << endl;
        Beep(3100, get_vitesse());
    }

    if (note == "Si") {
        cout << note << "  -->  Piano" << endl;
        Beep(3120, get_vitesse());
    }
}
