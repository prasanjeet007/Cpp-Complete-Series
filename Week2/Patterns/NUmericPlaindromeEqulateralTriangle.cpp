#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number for your pattern \n";
    cin >> num;
    for (int row = 0; row < num; row++)
    {
        int rowTotal = 0;
        for (int col = 0; col < num - row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            rowTotal = col + 1;
            cout << col + 1;
        }
        for (int row = rowTotal; row > 0;)
        {
            row = row - 1;
            if (row != 0)
            {
                cout << row;
            }
        }
        cout << "\n";
    }
    return 0;
}