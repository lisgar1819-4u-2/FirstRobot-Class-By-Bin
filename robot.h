
#include <string>

#ifndef ROBOT_H_INCLUDED
#define ROBOT_H_INCLUDED


class FirstRobot
{

public:
    FirstRobot();
    FirstRobot(int n, string nom);

    ~FirstRobot();

    void setNum (int n)
    {
        num = n;
    };
    void setName(string nom)
    {
        name = nom;
    };
    int getNum() const
    {
        return num;
    };
    string getName() const
    {
        return name;
    };

    bool isValidNumber();

private:
    int num;
    string name;
};


#endif // ROBOT_H_INCLUDED
