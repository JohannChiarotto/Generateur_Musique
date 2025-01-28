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

	virtual void Joue(string note);

	string get_nom();
	int get_vitesse();
};

#endif