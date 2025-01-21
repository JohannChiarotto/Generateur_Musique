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
    //void playNote(const std::string& note, const std::string& rhythm) const override;
};

#endif
