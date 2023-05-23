#pragma once
#include "Human.h"
class Flat
{
private:
	int number;
	Human* residents;
	unsigned int res_count;

public:
	Flat(int num = 1, unsigned int res_count = 1);

	~Flat() { delete[] residents; }

public:
	Human operator[] (int ind) const;
	void print() const;

};

