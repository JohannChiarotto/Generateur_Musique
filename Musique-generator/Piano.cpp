#include "Piano.hpp"
#include <Windows.h>
#include <iostream>

using namespace std;

Piano::Piano()
{
}

Piano::Piano(string n, string v) : Instrument(n,v)
{
}

void Piano::Joue(string note)
{
    if (note == "Do") {
        cout << note << "  -->  Piano" << endl;
    }

    if (note == "Re") {
        cout << note << "  -->  Piano" << endl;
    }

    if (note == "Mi") {
        cout << note << "  -->  Piano" << endl;
    }

    if (note == "fa") {
        cout << note << "  -->  Piano" << endl;
    }

    if (note == "Sol") {
        cout << note << "  -->  Piano" << endl;
    }

    if (note == "La") {
        cout << note << "  -->  Piano" << endl;
    }

    if (note == "Si") {
        cout << note << "  -->  Piano" << endl;
    }
}
