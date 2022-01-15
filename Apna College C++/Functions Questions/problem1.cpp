//print all  prime numbers between 2 given  numbers
#include <iostream>
#include <math.h>
using namespace std;

bool checkprime(int number)
{

    for (int j = 2; j <= sqrt(number); j++)
    {

        if (number % j == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int num1, num2;
    cin >> num1 >> num2;
    for (int i = num1; i <= num2; i++)
    {
        if (checkprime(i))
            cout << i << endl;
    }
}