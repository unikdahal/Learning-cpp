//WAP to print all the prime numbers between the two input numbers

#include <iostream>
using namespace std;

int num1, num2, i, j;

int main()
{
    cout << "Enter The Numbers";
    cin >> num1 >> num2;
    for (i = num1; i < num2; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            cout << j << endl;
        }
    }
}