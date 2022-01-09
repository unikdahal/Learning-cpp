#include <iostream>

using namespace std;
int glo = 6;

void sum()
{
    int a;
    cout << glo;
}

int main()
{
    // int a = 4;
    // int b = 5;
    int glo = 28;
    glo = 78;
    int a = 45, b = 54;
    float pie = 3.14;
    char c = 'c';
    bool d = true;
    sum();

    cout << "This is tutorial 4.\n Here the value of a is " << a << ".\n The value of b is  " << b;
    sum();
    cout << "\n The value of pie is " << pie;
    cout << "\n The value of c is " << c;
    cout << glo;
    cout << d;
    return 0;
}
