#include <iostream>
#include <string>

class Student {
public:
std::string fio;
int studVar;
int subGroup;

Student()
{
this->fio = "";
this->studVar = 0;
this->subGroup = 0;
}

Student(const std::string fio1, const int studVar1, const int subGroup1)
{
this->fio = fio1;
this->studVar = studVar1;
this->subGroup = subGroup1;
}

Student(const Student &other)
{
this->fio = other.fio;
this->studVar = other.studVar;
this->subGroup = other.subGroup;
}
}

class Group {
public:
std::string name;

Group()
{
this->name = "";
}

Group(const std::string name1)
{
this->name = name1;
}

Group(sonst Group &other)
{
this->name = other.name;
}

}

int main()
{

}