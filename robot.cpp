#include <iostream>
using namespace std;

#include "robot.h"
#include <string>
#include "apstring.cpp"

FirstRobot::FirstRobot()
{
    num = 0;
    name = "null";
}

FirstRobot::FirstRobot(int n, string nom)
{
    num = n;
    name = nom;
}

FirstRobot::~FirstRobot()
{
//cout << "Deleting Object" << endl;
}

bool FirstRobot::isValidNumber()
{

///last digit is same as first digit
///then return true;
    string number;

    //converting to apstring
    number = to_string(num);

    int size;


    size = number.length();

    //cout << "size is" << size << endl;
    //if number has only 1 digit,
    //then it cannot compare itself
    //just make it invalid.
    //robot's number should be at least 2
    //digits.
    if (size > 1 && number[0]==number[size-1])
    {
        return true;
    }
    else
    {
        return false;
    }

}


