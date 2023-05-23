#include <iostream>
#include <Windows.h>
#include "Human.h"

using namespace std;

Human Func()
{
	Human h3{ "ƒмитрий" };
	return h3;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Human h1{" ирилл", 19, MALE};
	cout << h1 << endl;

	Human h2{h1};
	cout << h2 << endl;

	Human h4 = Func();
	cout << h4 << endl;


	return 0;
}