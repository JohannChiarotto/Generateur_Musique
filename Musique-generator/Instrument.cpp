#include "Instrument.hpp"
#include <windows.h>
#include <iostream>
using namespace std;

Instrument::Instrument()
{
}

Instrument::Instrument(string n, int v)
{
	m_nom = n;
	m_vitesse = v;
}

Instrument::~Instrument()
{
}

void Instrument::Joue(string note)
{
}

string Instrument::get_nom()
{
	return m_nom;
}

int Instrument::get_vitesse()
{
	return m_vitesse;
}
