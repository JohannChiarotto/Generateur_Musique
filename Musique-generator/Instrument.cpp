#include "Instrument.hpp"

#include <iostream>
using namespace std;

Instrument::Instrument()
{
}

Instrument::Instrument(string n, string v)
{
	m_nom = n;
	m_vitessse = v;
}

Instrument::~Instrument()
{
}
