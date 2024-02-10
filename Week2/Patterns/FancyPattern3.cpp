#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number for your pattern \n";
    cin >> num;
    for (int row = 0; row < num; row++)
    {
        int cond = row <= num / 2 ? 2 * row : 2 * (num - row - 1);
        for (int col = 0; col <= cond; col++)
        {
            if (col <= row)
                cout << col + 1;
            else
                cout << cond - col + 1;
        }
        cout << "\n";
    }
    return 0;
}