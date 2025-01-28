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
        Beep(3000, 250);
    }

    if (note == "Re") {
        cout << note << "  -->  Piano" << endl;
        Beep(3020, 250);
    }

    if (note == "Mi") {
        cout << note << "  -->  Piano" << endl;
        Beep(3040, 250);
    }

    if (note == "Fa") {
        cout << note << "  -->  Piano" << endl;
        Beep(3060, 250);
    }

    if (note == "Sol") {
        cout << note << "  -->  Piano" << endl;
        Beep(3080, 250);
    }

    if (note == "La") {
        cout << note << "  -->  Piano" << endl;
        Beep(3100, 250);
    }

    if (note == "Si") {
        cout << note << "  -->  Piano" << endl;
        Beep(3120, 250);
    }
}
