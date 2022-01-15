//Factorial of a number

#include <iostream>
using namespace std;

int fac(int n)
{
    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    cin >> n;

    cout << fac(n);
}