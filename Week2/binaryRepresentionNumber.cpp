#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int number, binaryNumber = 0, i = 0;
    cout << "Enter a number"
         << "\n";
    cin >> number;
    while (number != 0)
    {
        int bit = number % 2;
        binaryNumber = bit * pow(10, i++) + binaryNumber;
        number = number / 2;
    }
    cout << "Binary Number is " << binaryNumber << endl;
    return 0;
}