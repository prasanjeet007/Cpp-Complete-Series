#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number for your pattern \n";
    cin >> num;
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < ((2 * num) - row - 2); col++)
        {
            cout << "*";
        }
        for (int col = 0; col < ((2 * row) + 1); col++)
        {
            if (col & 1)
                cout << "*";
            else
                cout << row + 1;
        }
        for (int col = 0; col < ((2 * num) - row - 2); col++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}