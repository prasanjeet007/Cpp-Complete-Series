#include <iostream>
using namespace std;
void rowWiseSum2DArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum is " << sum << endl;
    }
}
int main()
{
    int arr[][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    int row = 3, col = 3;
    rowWiseSum2DArray(arr, row, col);
    return 0;
}