#pragma once
#include "Flat.h"

class House
{
private:
	const unsigned int count_flats;
	Flat* flats;

public:
	House(const unsigned int count_flats = 10) : count_flats{ count_flats }
	{
		flats = new Flat[count_flats]{};
	}

	~House() { delete[] flats; }

public:
	void print() const
	{
		for (int i{}; i < count_flats; ++i)
		{
			flats[i].print();
			std::cout << std::endl;
		}
		
	}
};

