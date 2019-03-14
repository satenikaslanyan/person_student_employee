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
}
