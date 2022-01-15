#include <iostream>
using namespace std;

void fib(int n)
{
    int t1 = 0;
    int t2 = 1;

    for (int i = 1; i <= n; i++)
    {
        cout << t1 << " ";
        int nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }
}

int main()
{
    int n;
    cin >> n;
    fib(n);
}