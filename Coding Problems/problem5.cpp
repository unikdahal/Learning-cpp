//WAP TO CHECK WHETHER THE INPUT CHARACTER IS VOWEL OR NOT

#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter a character" << endl;
    cin >> c;

    switch (c)
    {
    case 'a':
        cout << "It Is Vowel";
        break;
    case 'e':
        cout << "It Is Vowel";
        break;
    case 'i':
        cout << "It Is Vowel";
        break;
    case 'o':
        cout << "It Is Vowel";
        break;
    case 'u':
        cout << "It Is Vowel";
        break;

    default:
        cout << "It is Consonent";
        break;
    }
}