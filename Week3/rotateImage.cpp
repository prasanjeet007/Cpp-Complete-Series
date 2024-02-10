#include <iostream>
using namespace std;
void reverseArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int left = 0;
        int right = col - 1;
        while (left < right)
        {
            swap(arr[i][left], arr[i][right]);
            left++;
            right--;
        }
    }
}
void rotateImage(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    reverseArray(arr, 3, 3);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;
    rotateImage(arr, row, col);
    return 0;
}