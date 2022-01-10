#include <iostream>
using namespace std;

char button;
int main()
{
    cout << "Enter the button" << endl;
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Namaste" << endl;
        break;
    case 'c':
        cout << "Hola" << endl;
        break;

    default:
        cout << "I am learning more languages" << endl;
        break;
    }
}