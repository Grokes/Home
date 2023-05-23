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
	Human() :Human("Иван", 30, 1) {}
	explicit Human(const char* name) :Human(name, 0, 1) {}
	explicit Human(const char* name, const unsigned int age) :Human(name, age, 1) {}
	explicit Human(const char* name, const unsigned int age, const bool sex);
	Human(const Human& copy) : Human(copy.name, copy.age, copy.sex) {}
	Human(Human&& copy) : name{ copy.name }, age{ copy.age }, sex{ copy.sex } { copy.name = nullptr; }

	~Human() { delete[] name; }

public:
	void operator= (const Human&);
	void operator= (Human&&);
	void operator() ();
	operator int();
	friend std::ostream& operator<< (std::ostream& out, const Human& human);

private:
	void CopyName(const char* copy);

};

