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
    }

    if (note == "Re") {
        cout << note << "  -->  Harpe" << endl;
    }

    if (note == "Mi") {
        cout << note << "  -->  Harpe" << endl;
    }

    if (note == "Fa") {
        cout << note << "  -->  Harpe" << endl;
    }

    if (note == "Sol") {
        cout << note << "  -->  Harpe" << endl;
    }

    if (note == "La") {
        cout << note << "  -->  Harpe" << endl;
    }

    if (note == "Si") {
        cout << note << "  -->  Harpe" << endl;
    }
}
