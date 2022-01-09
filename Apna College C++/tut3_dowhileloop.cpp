#include <iostream>
using namespace std;

//prints the input number unless its negative
int main()
{

    int n;
    cin >> n;

    do
    {
        cout << n << endl;
        cin >> n;
    } while (n > 0);

    return 0;
}