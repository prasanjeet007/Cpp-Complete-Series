#include <iostream>
using namespace std;
void transposeMatrix(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}
void printArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    int row = 3, col = 3;
    printArray(arr, row, col);
    transposeMatrix(arr, row, col);
    printArray(arr, row, col);
    return 0;
}