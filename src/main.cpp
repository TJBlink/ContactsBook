#include <iostream>
#include "../inc/Student.h"


int countCharacters(std::string s);
void printWelcome(void);
void printList(void);
std::string setw(int cnt);


/*
*
* MAIN FUNCTION
*
*/
int main(int argc, char** argv)
{
    printWelcome();
    printList();

    std::cout << std::endl << std::endl << countCharacters("Jacek") <<std::endl;

    return 0;
}



void printWelcome(void)
{
  std::cout << std::endl;
  std::cout << "------------------------------------" << std::endl;
  std::cout << "----------STUDENT DATABASE----------" << std::endl;
  std::cout << "----------------v1.0----------------" << std::endl;
  std::cout << "------------------------------------" << std::endl;
  std::cout << std::endl;
}

int countCharacters(std::string s)
{
  int i = 0;

  while(s[i] != 0) ++i;

  return i;
}

std::string setw(int cnt)
{
  std::string spaces;

  for(int i = 1; i < cnt; ++i)
        spaces = spaces + " ";

  return spaces;
}

void printList(void)
{
  Student st1;
  Student st2("Adam", "Krzysko", 43, 1121);
  Student st3 = st2;

  st1.setName("Marek");
  st1.setSurname("Kowalski");
  st1.setAge(24);
  st1.setID(1234);

  std::cout << "Number of students added to database: " << Student::getStudentNumber();
  std::cout << std::endl;
  std::cout << std::endl;

  std::cout << "Student: " << setw(5) << st1.getName() << " " << st1.getSurname();
  std::cout << std::endl;
  std::cout << "Age: " << setw(9) << st1.getAge();
  std::cout << std::endl;
  std::cout << "ID: " << setw(10) << st1.getID();
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << "Student: " << setw(5) << st2.getName() << " " << st2.getSurname();
  std::cout << std::endl;
  std::cout << "Age: " << setw(9) << st2.getAge();
  std::cout << std::endl;
  std::cout << "ID: " << setw(10) << st2.getID();
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << "Student: " << setw(5) << st3.getName() << " " << st3.getSurname();
  std::cout << std::endl;
  std::cout << "Age: " << setw(9) << st3.getAge();
  std::cout << std::endl;
  std::cout << "ID: " << setw(10) << st3.getID();
  std::cout << std::endl;
}
