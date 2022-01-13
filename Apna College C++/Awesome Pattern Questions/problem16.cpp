#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n, sum = 0;
    cin >> n;
    int originaln = n;
    while (n > 0)
    {
        int remainder = n % 10;
        sum = sum + remainder * remainder * remainder;
        n = n / 10;
    }
    cout << sum;
    if (originaln == sum)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not Armstrong";
    }
    return 0;
}