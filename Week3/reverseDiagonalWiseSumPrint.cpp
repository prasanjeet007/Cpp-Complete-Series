#include <iostream>
using namespace std;
void diagonalWiseSum2DArray(int arr[][3], int row, int col)
{
    int sum = 0;
    int j = col - 1;
    for (int i = 0; i < row; i++)
    {
        sum += arr[i][j];
        j--;
    }
    cout << "Sum is " << sum << endl;
}
int main()
{
    int arr[][3] = {{10, 20, 40}, {40, 50, 60}, {70, 80, 90}};
    int row = 3, col = 3;
    diagonalWiseSum2DArray(arr, row, col);
    return 0;
}