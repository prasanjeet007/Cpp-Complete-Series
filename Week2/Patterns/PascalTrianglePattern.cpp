#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number for your pattern \n";
    cin >> num;
    for (int row = 0; row < num; row++)
    {
        int c = 1;
        for (int col = 0; col < row + 1; col++)
        {
            cout << c;
            c = c * ((row + 1) - (col + 1)) / (col + 1);
        }
        cout << "\n";
    }
    return 0;
}