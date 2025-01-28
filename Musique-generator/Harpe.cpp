#include "Harpe.hpp"
#include <windows.h>
#include<iostream>

using namespace std;

Harpe::Harpe()
{
}

Harpe::Harpe(string n, string v) : Instrument(n, v)
{
}

void Harpe::Joue(string note)
{
    if (note == "Do") {
        cout << note << "  -->  Harpe" << endl;
        Beep(2000, 250);
    }

    if (note == "Re") {
        cout << note << "  -->  Harpe" << endl;
        Beep(2020, 250);
    }

    if (note == "Mi") {
        cout << note << "  -->  Harpe" << endl;
        Beep(2040, 250);
    }

    if (note == "Fa") {
        cout << note << "  -->  Harpe" << endl;
        Beep(2060, 250);
    }

    if (note == "Sol") {
        cout << note << "  -->  Harpe" << endl;
        Beep(2080, 250);
    }

    if (note == "La") {
        cout << note << "  -->  Harpe" << endl;
        Beep(2100, 250);
    }

    if (note == "Si") {
        cout << note << "  -->  Harpe" << endl;
        Beep(2120, 250);
    }
}
