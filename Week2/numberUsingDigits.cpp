#include <iostream>
using namespace std;
int main()
{
    int noOfDigits, digit, number = 0;
    cout << "Enter how many digits " << endl;
    cin >> noOfDigits;
    while (noOfDigits != 0)
    {
        cin >> digit;
        number = number * 10 + digit;
        noOfDigits--;
    }
    cout << "Number is " << number << endl;
    return 0;
}