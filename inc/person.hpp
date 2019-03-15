#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person
{
    protected:
        std::string name;
        std::string surname;
        int age;
    public:
        Person();
        Person(std::string p_name, std::string p_surname, int p_age);
        std::string get_name() const;
        std::string get_surname() const;
        int get_age() const;
        void set_name(std::string p_name);
        void set_surname(std::string p_surname);
        void set_age(int p_age);
        void get_info();
};

#endif
