#include <iostream>
using namespace std;
int main()
{
    int number, factorial = 1;
    cout << "Enter a number \n";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }
    cout << "Factorial is " << factorial << endl;
    return 0;
}