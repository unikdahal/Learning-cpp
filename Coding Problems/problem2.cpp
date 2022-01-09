//WAP to check whether the input number is prime or not

#include <iostream>
using namespace std;

int n, i;
int main()
{
    cout << "Enter The Number";
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            break;
        }
    }
    if (i == n)
    {
        cout << "Prime";
    }
    return 0;
}