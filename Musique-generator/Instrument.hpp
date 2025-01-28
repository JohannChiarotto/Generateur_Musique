#ifndef INSTRUMENT
#define INSTRUMENT

#include <iostream>
using namespace std;

class Instrument 
{ 
protected:
	string m_nom;
	int m_vitesse;

public:
	Instrument();
	Instrument(string n, int v);
	virtual ~Instrument();

	virtual void Joue(string note, int vitesse);
	virtual void AfficheArt();

	string get_nom();
	int get_vitesse();
};

#endif