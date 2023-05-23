#include <iostream>
#include <Windows.h>
#include "Human.h"
#include "Flat.h"
#include "House.h"

using namespace std;

Human Func()
{
	Human h3{ "ƒмитрий" };
	return move(h3);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Tests Human
	//Human h1{" ирилл", 19, MALE};
	//cout << h1 << endl;

	//Human h2{h1};
	//cout << h2 << endl;

	//Human h4 = Func();
	//cout << h4 << endl;

	//h4 = h1;
	//cout << h4 << endl;
	//h4 = Func();
	//cout << h4 << endl;
	//h4();
	//cout << (int)h4;


	// Tests Flat
	/*Flat f1{10, 3};
	f1.print();
	cout << endl;
	f1[0]();*/

	// Tests House
	/*House h1{};
	h1.print();*/

	return 0;
}