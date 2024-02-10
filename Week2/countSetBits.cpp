#include <iostream>
using namespace std;
int main()
{
    int number, count = 0;
    cout << "Enter a number \n";
    cin >> number;
    while (number != 0)
    {
        int bit = number % 2;
        if (bit)
            count++;
        number = number / 2;
    }
    cout << "Number of set bits  " << count << endl;
    return 0;
}