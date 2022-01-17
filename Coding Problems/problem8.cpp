#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = (2 * n - 1); i >= 1; i--)
    {
        for (int j = 1; j <= (2 * n - 1); j++)
        {
            if (i == 1 || i == (2 * n - 1) || j == 1 || j == (2 * n - 1))
            {
                cout << n;
            }
            else if (i == 2 || i == (2 * n - 2) || j == 2 || j == (2 * n - 2))
            {
                cout << (n - 1);
            }
            else if (i == 3 || i == (2 * n - 3) || j == 3 || j == (2 * n - 3))
            {
                cout << (n - 2);
            }
            else
            {
                cout << n - 3;
            }
        }
        cout << endl;
    }
}