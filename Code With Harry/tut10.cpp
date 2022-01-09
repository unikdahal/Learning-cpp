#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    /* Loops in C++*/

    //1. For loop

    //prints  number upto 100
    for (i; i < 100; i++)
    {
        cout << i << endl;
    }

    //2. While Loop

    //Prints from 100 to 1 since i=100
    while (i > 0)
    {
        cout << i << endl;
        i--;
    }

    //3. Do while loop

    //prints from 1 to 100
    //difference between while and do while is do while loops runs 1 time even it doesn't satisfies the condition

    do
    {
        cout << i << endl;
        i++;
    } while (i < 100);

    return 0;
}