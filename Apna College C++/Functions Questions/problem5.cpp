#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = n; i >= 1; i--)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n, r;
    cout << "Enter n and r" << endl;
    cin >> n >> r;

    cout << (fact(n) / (fact(n - r) * fact(r)));
}