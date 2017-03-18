#include <iostream>
#include "Misc Functions.h"
#include "Student.h"

using namespace std;

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
{   int numberOfStudents = 0;
    
    Student st1;
    ++numberOfStudents;
    Student st2("Adam", "Krzysko", 43, 1121);
    ++numberOfStudents;
    Student st3 = st2;
    ++numberOfStudents;
    
    st1.setName("Marek");
    st1.setSurname("Kowalski");
    st1.setAge(24);
    st1.setID(1234);
    
    cout << "Number of students added to database: " << numberOfStudents;
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
