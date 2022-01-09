#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 4; i++)
    {
        cout << i << endl;
        if (i == 2)
        {
            //ends the loop
            break;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        //doesn't print 2 and print all other numbers
        if (i == 2)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}