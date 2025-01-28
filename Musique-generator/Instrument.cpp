#include "Instrument.hpp"
#include <windows.h>
#include <iostream>
using namespace std;

Instrument::Instrument()
{
}

Instrument::Instrument(string n)
{
	m_nom = n;
}

Instrument::~Instrument()
{
}

void Instrument::Joue(string note, int vitesse)
{
}

void Instrument::AfficheArt()
{
}

string Instrument::get_nom()
{
	return m_nom;
}
