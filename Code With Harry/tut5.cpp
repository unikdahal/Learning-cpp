#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    // << is called insertion operator
    cout << "Enter the value of num1: \n";
    // >> is called exertion operator
    cin >> num1;

    cout << "Enter the value of num2: \n";
    cin >> num2;

    cout << "The sum is " << num1 + num2;
    return 0;
}
