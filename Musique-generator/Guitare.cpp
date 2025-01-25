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
    }

    if (note == "Re") {
        cout << note << "  -->  Guitare" << endl;
    }

    if (note == "Mi") {
        cout << note << "  -->  Guitare" << endl;
    }

    if (note == "Fa") {
        cout << note << "  -->  Guitare" << endl;
    }

    if (note == "Sol") {
        cout << note << "  -->  Guitare" << endl;
    }

    if (note == "La") {
        cout << note << "  -->  Guitare" << endl;
    }

    if (note == "Si") {
        cout << note << "  -->  Guitare" << endl;
    }
}
