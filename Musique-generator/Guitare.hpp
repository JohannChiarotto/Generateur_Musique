#ifndef GUITARE
#define GUITARE

#include "Instrument.hpp"
#include <iostream>
using namespace std;

class Guitare :public Instrument
{
public:
	Guitare();
	Guitare(string n);
	void Joue(string n, int vitesse);
	void AfficheArt();
};
#endif