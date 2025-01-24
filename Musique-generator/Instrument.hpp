#ifndef INSTRUMENT
#define INSTRUMENT

#include <iostream>
using namespace std;

class Instrument 
{ 
protected:
	string m_nom;
	string m_vitessse;

public:
	Instrument();
	Instrument(string n, string v);
	~Instrument();
};

#endif