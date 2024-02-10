#include <iostream>
using namespace std;
void convert2DArrayInto1DArray(int arr[][4], int row, int col, int onedArr[])
{
    int COL = col;
    for (int i = 0; i < row; i++)
    {
        int newInx;
        for (int j = 0; j < col; j++)
        {
            newInx = (COL * i) + j;
            onedArr[newInx] = arr[i][j];
        }
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[3][4] = {{10, 20, 30, 40}, {50, 60, 70, 80}, {90, 100, 110, 120}};
    int row = 3;
    int col = 4;
    int oneDArr[row * col];
    convert2DArrayInto1DArray(arr, row, col, oneDArr);
    printArray(oneDArr, (row * col));
    return 0;
}