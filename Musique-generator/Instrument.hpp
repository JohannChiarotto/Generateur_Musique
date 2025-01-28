#ifndef INSTRUMENT
#define INSTRUMENT

#include <iostream>
using namespace std;

class Instrument 
{ 
protected:
	string m_nom;

public:
	Instrument();
	Instrument(string n);
	virtual ~Instrument();

	virtual void Joue(string note, int vitesse);
	virtual void AfficheArt();

	string get_nom();
};

#endif