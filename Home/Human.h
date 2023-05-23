#pragma once
#include <iostream>

#define MALE 1
#define FEMALE 0

class Human
{
private:
	char* name;
	unsigned int age;
	bool sex;

public:
	explicit Human(const char* name) :Human(name, 0, 1) {}
	explicit Human(const char* name, const unsigned int age) :Human(name, age, 1) {}
	explicit Human(const char* name, const unsigned int age, const bool sex);

	Human(const Human& copy) : Human(copy.name, copy.age, copy.sex) { std::cout << "copy"; }

	Human(Human&& copy) : name{ copy.name }, age{ copy.age }, sex{ copy.sex } { copy.name = nullptr; std::cout << "copy ultra";}

	~Human() { delete[] name; }

public:
	friend std::ostream& operator<< (std::ostream& out, const Human& human);

};

