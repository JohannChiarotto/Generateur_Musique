#include "Instrument.hpp"
#include <windows.h>
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

void Instrument::Joue(string note)
{
}

string Instrument::get_nom()
{
	return m_nom;
}
