#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include "person.hpp"

class Employee : public Person
{
    private:
        int salary;
    public:
        Employee() : Person(), salary(0) {}
        Employee(std::string e_name, std::string e_surname, int e_age, int e_salary);
        void get_info();
        void set_salary(int s_salary);
        int get_salary() const;
};

#endif
