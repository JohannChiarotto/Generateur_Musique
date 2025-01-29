#ifndef PARTITION
#define PARTITION

#include <iostream>

using namespace std;

class Partition
{
public:
	Partition();
	virtual ~Partition();
	
	int Return_note(string note);
	void Joue(string musique);
};

#endif