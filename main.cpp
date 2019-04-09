///Bin's First Robot class

#include <iostream>
using namespace std;

#include "robot.h"
#include "apstring.h"

///prototypes
void Introduction();
void InfoRobot1(FirstRobot one);
void InfoRobot2(FirstRobot two);


int main ()
{
//introduction of program.
    Introduction();
//Initializing Objects...
    FirstRobot one (333, "Nobody");
    FirstRobot two;
    two.setName("Personne");
    two.setNum(4);

//Printing out info about our robots
    InfoRobot1(one);
    InfoRobot2(two);

    cout << endl;
    return 0;
}

///Functions
void Introduction()
{
    cout << "Welcome to Bin's factory..." << endl;
    cout << "Each robot has a name and a number of ";
    cout << "at least two digits." << endl << endl;
}
void InfoRobot1(FirstRobot one)
{
    cout << "Robot 1's name: " << one.getName() << endl;
    cout << "Robot 1's number: " << one.getNum() << endl;
    cout <<"Checking if number is valid: ";
    cout << one.isValidNumber() << endl << endl;
}

void InfoRobot2(FirstRobot two)
{
    cout << "Robot 2's name: " << two.getName() << endl;
    cout << "Robot 2's number: " << two.getNum() << endl;
    cout <<"Checking if number is valid: ";
    cout << two.isValidNumber() << endl;
}
