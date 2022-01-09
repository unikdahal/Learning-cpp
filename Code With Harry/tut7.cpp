#include <iostream>

using namespace std;

int c = 45;

int main()

// ***Build In Data Types***
{
    //     int a, b, c;
    //     cout << "Enter the value of a:" << endl;
    //     cin >> a;
    //     cout << "Enter the value of b:" << endl;
    //     cin >> b;
    //     c = a + b;
    //     cout << "The sum is " << c << endl;
    //     cout << "The global C is " << ::c << endl;
    //     return 0;

    //***LITERALS***
    // float d = 34.4f;
    // long double e = 34.4l;
    // cout << "The size of 34.4 is" << sizeof(34.4) << endl;
    // cout << "The size of 34.4f is" << sizeof(d) << endl;
    // cout << "The size of 34.4l is" << sizeof(e) << endl;

    //*************reference variables**************

    // float a = 34.4;
    // ;

    // float &b = a;
    // cout << "The value of a is " << a << endl;
    // cout << "The value of b is " << b << endl;

    //*************Type Casting**************

    int a = 45;
    float b = 45.46;
    cout << "The value of a is " << float(a) << endl;
    cout << "The value of a is " << (float)a << endl;
    cout << "The value of b is " << (int)b << endl;
    cout << "The value of b is " << int(b) << endl;
    return 0;
}