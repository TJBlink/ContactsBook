#include <iostream>
#include "Student.h"

Student::Student()
{
}

Student::Student(std::string n, std::string s, int a, int i)
 : name(n), surname(s), age(a), id(i)
{
}

Student::Student(const Student& st)
  : name(st.name), surname(st.surname), age(st.age), id(st.id)
{
}

std::string Student::getName(void)
{
  return name;
}

std::string Student::getSurname(void)
{
  return surname;
}

int Student::getAge(void)
{
  return age;
}

int Student::getID(void)
{
  return id;
}

void Student::setName(std::string n)
{
  name = n;
}

void Student::setSurname(std::string s)
{
  surname = s;
}

void Student::setAge(int a)
{
  age = a;
}

void Student::setID(int i)
{
  id = i;
}
