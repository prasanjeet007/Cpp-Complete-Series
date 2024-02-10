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
        for (int col = 0; col < row + 1; col++)
        {
            count++;
            cout << count;
        }
        cout << "\n";
    }
    return 0;
}