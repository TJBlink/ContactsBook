#include <iostream>
#include "../inc/Student.h"

using namespace std;


int countCharacters(string s);//function which counts characters of string
void printWelcome(void);//printing welcome screen above main program
void printList(void);//printing list of persons
string setw(int cnt);//adding spaces between words


/*
*
* MAIN FUNCTION
*
*/
int main(int argc, char** argv)
{
    printWelcome();
    printList();

    cout << endl << endl << countCharacters("Jacek") << endl;

    return 0;
}



void printWelcome(void)
{
  cout << endl;
  cout << "------------------------------------" << endl;
  cout << "----------STUDENT DATABASE----------" << endl;
  cout << "----------------v1.0----------------" << endl;
  cout << "------------------------------------" << endl;
  cout << endl;
}

int countCharacters(string s)
{
  int i = 0;

  while(s[i] != 0) ++i;

  return i;
}

string setw(int cnt)
{
  string spaces;

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

  cout << "Number of students added to database: " << Student::getStudentNumber();
  cout << endl;
  cout << endl;

  cout << "Student: " << setw(5) << st1.getName() << " " << st1.getSurname();
  cout << endl;
  cout << "Age: " << setw(9) << st1.getAge();
  cout << endl;
  cout << "ID: " << setw(10) << st1.getID();
  cout << endl;

  cout << endl;
  cout << "Student: " << setw(5) << st2.getName() << " " << st2.getSurname();
  cout << endl;
  cout << "Age: " << setw(9) << st2.getAge();
  cout << endl;
  cout << "ID: " << setw(10) << st2.getID();
  cout << endl;

  cout << endl;
  cout << "Student: " << setw(5) << st3.getName() << " " << st3.getSurname();
  cout << endl;
  cout << "Age: " << setw(9) << st3.getAge();
  cout << endl;
  cout << "ID: " << setw(10) << st3.getID();
  cout << endl;
}
