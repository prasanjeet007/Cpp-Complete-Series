#include <iostream>
using namespace std;
void printSpiralMatrix(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        if (i & 1)
        {
            for (int j = col - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}
int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int row = 4;
    int col = 3;
    printSpiralMatrix(arr, row, col);
    return 0;
}