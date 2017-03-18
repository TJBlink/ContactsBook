#include <iostream>
#include "Misc Functions.h"
#include "Student.h"

using namespace std;

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
