//Simple Calculator Using Switch

#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    cout << "Enter two Numbers" << endl;
    cin >> num1 >> num2;

    char op;
    cout << "Enter an Operator" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;

    case '-':
        cout << num1 - num2;
        break;

    case '/':
        cout << num1 / num2;
        break;

    case '*':
        cout << num1 * num2;
        break;

    default:
        cout << "Invalid Operator";
        break;
    }
}