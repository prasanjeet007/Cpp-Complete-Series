#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number for your pattern \n";
    cin >> num;
    int count = 0;
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < 2 * row + 1; col++)
        {

            if (col & 1)
            {
                cout << "*";
            }
            else
            {
                count++;
                cout << count;
            }
        }
        cout << "\n";
    }
    int start = count - num + 1;
    for (int row = 0; row < num; row++)
    {
        int k = start;
        start = start - (num - row - 1);
        for (int col = 0; col < ((2 * num) - (2 * row)) - 1; col++)
        {

            if (col & 1)
            {
                cout << "*";
            }
            else
            {
                cout << k;
                k++;
            }
        }
        cout << "\n";
    }
    return 0;
}