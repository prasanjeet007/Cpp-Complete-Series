#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number \n";
    cin >> number;
    if (number & 1)
        cout << number << " is an odd number " << endl;
    else
        cout << number << " is an even number " << endl;
    return 0;
}