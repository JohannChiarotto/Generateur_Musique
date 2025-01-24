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
    Harpe(string n, string v);
    void Joue();
};

#endif
