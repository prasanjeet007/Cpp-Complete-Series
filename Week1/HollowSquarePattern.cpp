#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number \n";
    cin >> num;
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < num; col++)
        {
            if (row == 0 || row == num - 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == num - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}