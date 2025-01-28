#ifndef PIANO
#define PIANO

#include "Instrument.hpp"
#include <iostream>

using namespace std;

class Piano : public Instrument
{
public:
	Piano();
	Piano(string n);
	void Joue(string n, int vitesse);
	void AfficheArt();
};
#endif