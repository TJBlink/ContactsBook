#include <iostream>
#include "../inc/Student.h"


int Student::studentCount = 0;


Student::Student()
{
  ++studentCount;
}

Student::Student(std::string n, std::string s, int a, int i)
 : name(n), surname(s), age(a), id(i)
{
  ++studentCount;
}

Student::Student(const Student& st)
  : name(st.name), surname(st.surname), age(st.age), id(st.id)
{
    ++studentCount;
}

int Student::getStudentNumber(void)
{
  return studentCount;
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
