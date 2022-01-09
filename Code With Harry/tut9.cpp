#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age > 18)
    {
        cout << "You are eligible to vote";
    }
    else if (age == 18)
    {
        cout << "You are eligible to vote";
    }
    else if (age == 0)
    {
        cout << "Your are not yet born";
    }
    else
    {
        cout << ("You are not eligible to vote") << endl;
    }

    // Switch Statement
    switch (age)
    {
    case 0:
        cout << "Your are not yet born";
        break;
    case 18:
        cout << "You are eligible to vote";
        break;
    case 19:
        cout << "You are eligible to vote";
        break;
    default:
        cout << "Your age isn't programmed";
    }
    return 0;
}