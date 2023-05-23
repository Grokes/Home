#include "Flat.h"

Flat::Flat(int num, unsigned int res_count) : number{ num }, res_count{res_count}
{
	this->residents = new Human[res_count]{};
}


void Flat::print() const
{
	std::cout << "N" << number << ": ";
	for (int i{}; i < res_count; ++i)
	{
		residents[i]();
		(i == res_count-1) ? std::cout << ".": std::cout << ", ";
	}
}

Human Flat::operator[] (int ind) const
{
	return residents[ind];
}