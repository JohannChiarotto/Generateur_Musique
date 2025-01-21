#ifndef GUITARE
#define GUITARE

#include "Instrument.hpp"
#include <iostream>
using namespace std;

class Guitare :public Instrument
{
private:
	int m_frequence;

public:
	Guitare();
};
#endif