#include <iostream>
using namespace std;
int main()
{
    int integer, newInt = 0;
    cout << "Enter an integer \n";
    cin >> integer;
    while (integer != 0)
    {
        int digit = integer % 10;
        newInt = newInt * 10 + digit;
        integer = integer / 10;
    }
    while (newInt != 0)
    {
        int digit = newInt % 10;
        cout << digit << endl;
        newInt = newInt / 10;
    }
}