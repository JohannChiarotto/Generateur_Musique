#ifndef INSTRUMENT
#define INSTRUMENT

#include <iostream>
using namespace std;

class Instrument 
{ 
protected:
	string m_nom;
	string m_vitessse;
	int m_frequence;

public:
	Instrument();
	Instrument(string n, string v);
	virtual ~Instrument();

	virtual void Joue();
};

#endif