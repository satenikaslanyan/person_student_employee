#include "employee.hpp"

Employee::Employee(std::string e_name, std::string e_surname, int e_age, int e_salary)
 : Person(e_name, e_surname, e_age)
{
    if( e_salary >= 0) {
        salary = e_salary;
    }
    else {
        throw std::invalid_argument("Invalid Salary");
    }
}

void Employee::get_info()
{
    Person::get_info();
    std::cout << "Salary: " << salary << std::endl;
}

void Employee::set_salary(int e_salary)
{
    salary = e_salary;
}

int Employee::get_salary() const
{
    return salary;
}
