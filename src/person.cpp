#include "person.hpp"
#include <stdexcept>

Person::Person()
{
	name = "";
    surname = "";
	age = 0;
}

Person::Person (std::string p_name, std::string p_surname, int p_age)
{
	name = p_name;
    surname = p_surname;
	if( p_age >= 0 && p_age < 120 ) {
        age = p_age;
	}
	else {
        throw std::invalid_argument("Invalid Age");
	}
}

std::string Person::get_name() const
{
	return name;
}

std::string Person::get_surname() const
{
    return surname;
}

int Person::get_age() const
{
	return age;
}

void Person::get_info()
{
    std::cout << "\nName: " << name << " ";
    std::cout << "Surname: " << surname << " ";
    std::cout << "Age: " << age << " ";
}

void Person::set_name(std::string p_name)
{
	name = p_name;
}

void Person::set_surname(std::string p_surname)
{
    surname = p_surname;
}

void Person::set_age(int p_age)
{
    if( p_age >= 0 && p_age < 120 ) {
        age = p_age;
    }
    else {
        throw std::invalid_argument("Invalid Age");
    }
}
