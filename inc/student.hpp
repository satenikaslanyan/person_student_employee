#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "person.hpp"

class Student : public Person
{
    private:
        int grade;
        std::string university;
    public:
        Student() : Person(), grade(0), university("") {}
        Student(std::string s_name, std::string s_surname, int s_age, int s_grade, std::string s_university);
        void get_info();
        void set_grade(int s_grade);
        int get_grade() const;
        void set_university(std::string s_university);
        std::string get_university() const;
};

#endif
