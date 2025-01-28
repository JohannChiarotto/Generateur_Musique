#ifndef GUITARE
#define GUITARE

#include "Instrument.hpp"
#include <iostream>
using namespace std;

class Guitare :public Instrument
{
private:
	int m_frequence;

public:
	Guitare();
	Guitare(string n, int v);
	void Joue(string n);
};
#endif