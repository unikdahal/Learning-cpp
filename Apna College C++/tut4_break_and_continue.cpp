#include <iostream>
using namespace std;

int pocketmoney = 1500;

int main()
{
    for (int date = 1; date <= 30; date++)
    {
        if (date % 2 == 0)
        {
            continue;
        }
        if (pocketmoney == 0)
        {
            cout << "Your Pocket Money is Over You can't go out for rest of the month";
            break;
        }

        cout << "You Can Go Out Today as today is odd date " << date << endl;
        pocketmoney = pocketmoney - 150;
    }
}