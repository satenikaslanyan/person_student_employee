#include "student.hpp"
#include "employee.hpp"

int main()
{
    Person p("Satenik", "Aslanyan", 22);
    p.get_info();
    Student s("Mane", "Asatryan", 23, 20, "YSU");
    s.get_info();
    Employee e("Naira", "Aslanyan", 46, 100000);
    e.get_info();

    Person* p1 = new Person("Tigran", "Aslanyan", 50);
    p1->get_info();
    Person* p2 = new Student("Haik", "Aslanyan", 26, 20, "YSU");
    p2->get_info();

    Student* s1 = new Person("Vahan", "Aslanyan", 12);
    s1->get_info();
}
