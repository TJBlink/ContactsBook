#ifndef __STUDENT_H
#define __STUDENT_H

class Student
{
  private:
    
    int studentCount;

    std::string name;
    std::string surname;
    int age;
    int id;

  public:
    Student();
    Student(std::string n, std::string s, int a, int i);
    Student(const Student& st);

    std::string getName(void);
    std::string getSurname(void);
    int getAge(void);
    int getID(void);
    void setName(std::string n);
    void setSurname(std::string s);
    void setAge(int a);
    void setID(int i);
};

#endif//__STUDENT_H
