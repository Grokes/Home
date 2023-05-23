#include "Human.h"

Human::Human(const char* name, const unsigned int age, const bool sex) : age{age}, sex{sex}
{
	CopyName(name);
}

std::ostream& operator<< (std::ostream& out, const Human& human)
{
	out << "���: " << human.name << std::endl;
	out << "�������: " << human.age << std::endl;
	out << "���: ";
	(human.sex) ? (out << "�������") : (out << "�������");

	return out;
}

void Human::operator= (const Human& copy)
{
	delete[] name;
	CopyName(copy.name);
	age = copy.age;
	sex = copy.sex;
}

void Human::operator() ()
{
	std::cout << name;
}

Human::operator int()
{
	return age;
}

void Human::operator= (Human&& copy)
{
	delete[] name;
	name = copy.name;
	age = copy.age;
	sex = copy.sex;
	copy.name = nullptr;
	std::cout << "ssssss";
}

void Human::CopyName(const char* copy)
{
	// �����������������, ������� ����������� �������� ��� �������
	this->name = new char[strlen(copy) + 1] {};
	char* temp_pointer = this->name;
	while (*copy != '\0')
	{
		temp_pointer[0] = copy[0];
		temp_pointer++;
		copy++;
	}
	temp_pointer[0] = copy[0];
}