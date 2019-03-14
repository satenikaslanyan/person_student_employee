#include "student.hpp"

Student::Student(std::string s_name, std::string s_surname, int s_age, int s_grade, std::string s_university)
 : Person(s_name, s_surname, s_age)
{
    if( s_grade >= 0 && s_grade <= 20 ) {
        grade = s_grade;
    }
    else {
        throw std::invalid_argument("Invalid Grade");
    }
    university = s_university;
}

void Student::get_info()
{
    Person::get_info();
    std::cout << "Grade: " << grade << " ";
    std::cout << "University: " << university << " ";
}

void Student::set_grade(int s_grade)
{
    grade = s_grade;
}

int Student::get_grade() const
{
    return grade;
}

void Student::set_university(std::string s_university)
{
    university = s_university;
}

std::string Student::get_university() const
{
    return university;
}
