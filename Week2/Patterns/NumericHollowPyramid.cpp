#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number for generate pattern \n";
    cin >> num;
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            if (row == 0 || row == num - 1)
            {
                cout << col + 1;
            }
            else
            {
                if (col == 0 || col == row)
                {
                    cout << col + 1;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}