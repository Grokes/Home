#include "Human.h"

Human::Human(const char* name, const unsigned int age, const bool sex) : age{age}, sex{sex}
{
	// Экспериментировал, поэтому конструкция выглядит так странно
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
	out << "Имя: " << human.name << std::endl;
	out << "Возраст: " << human.age << std::endl;
	out << "Пол: ";
	(human.sex) ? (out << "Мужчина") : (out << "Женщина");

	return out;
}