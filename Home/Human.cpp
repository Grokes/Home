#include "Human.h"

Human::Human(const char* name, const unsigned int age, const bool sex) : age{age}, sex{sex}
{
	// �����������������, ������� ����������� �������� ��� �������
	this->name = new char[strlen(name)+1] {};
	char* temp_pointer = this->name;
	while (*name != '\0')
	{
		temp_pointer[0] = name[0];
		temp_pointer++;
		name++;
	}
	temp_pointer[0] = name[0];
}

std::ostream& operator<< (std::ostream& out, const Human& human)
{
	out << "���: " << human.name << std::endl;
	out << "�������: " << human.age << std::endl;
	out << "���: ";
	(human.sex) ? (out << "�������") : (out << "�������");

	return out;
}