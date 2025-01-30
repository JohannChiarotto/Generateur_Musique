#ifndef PARTITION
#define PARTITION

#include <iostream>
#include <vector>

using namespace std;

class Partition
{
public:
	Partition();
	virtual ~Partition();
	
	int Return_note(string note);
	void Joue(string musique);
	void Joue_Musique(string notes[], double duree[], int taille);
	//void Joue_Musique(vector<string> notes, vector<double> duree);
};

#endif