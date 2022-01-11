#include <iostream>
using namespace std;

int main()
{
    //My Solution
    // int rows, n;
    // cout << "Enter the number of rows" << endl;
    // cin >> rows;
    // n = rows;

    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = n; j >= 1; --j)
    //     {
    //         cout << "*";
    //     }
    //     n--;
    //     cout << endl;
    // }

    //Ideal Solutioon

    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}