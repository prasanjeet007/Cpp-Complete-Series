#include <iostream>
using namespace std;
int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int row = 4;
    int col = 3;
    int num = 0;
    for (int i = 0; i < col; i++)
    {
        if (i & 1)
        {
            for (int j = (row - 1); j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = 0; j < row; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
    }
    return 0;
}