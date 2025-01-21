#ifndef PIANO
#define PIANO

#include "Instrument.hpp"
#include <iostream>

using namespace std;

class Piano : public Instrument
{
private:
	int m_frequence;
public:
	Piano();

};
#endif