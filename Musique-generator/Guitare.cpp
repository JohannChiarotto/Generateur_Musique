#include "Guitare.hpp"
#include <windows.h>
#include <iostream>
using namespace std;

Guitare::Guitare()
{
}

Guitare::Guitare(string n, string v) : Instrument(n,v)
{
}

void Guitare::Joue(string note)
{
    if (note == "Do") {
        cout << note << "  -->  Guitare" << endl;
        Beep(1000, 250);
    }

    if (note == "Re") {
        cout << note << "  -->  Guitare" << endl;
        Beep(1020, 250);
    }

    if (note == "Mi") {
        cout << note << "  -->  Guitare" << endl;
        Beep(1040, 250);
    }

    if (note == "Fa") {
        cout << note << "  -->  Guitare" << endl;
        Beep(1060, 250);
    }

    if (note == "Sol") {
        cout << note << "  -->  Guitare" << endl;
        Beep(1080, 250);
    }

    if (note == "La") {
        cout << note << "  -->  Guitare" << endl;
        Beep(1100, 250);
    }

    if (note == "Si") {
        cout << note << "  -->  Guitare" << endl;
        Beep(1120, 250);
    }
}
