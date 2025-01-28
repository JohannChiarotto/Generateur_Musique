#ifndef HARPE
#define HARPE

#include "Instrument.hpp"
#include <iostream>

using namespace std;

class Harpe : public Instrument {
private:
    int m_frequence;
public:
    Harpe();
    Harpe(string n, int v);
    void Joue(string n);
};

#endif
