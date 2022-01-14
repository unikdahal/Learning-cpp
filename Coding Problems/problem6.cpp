//Factorial of a number
#include <iostream>
using namespace std;

int main()
{

    int n, factorial = 1;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    cout << factorial;
}