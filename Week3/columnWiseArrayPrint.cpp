#include <iostream>
using namespace std;
void printColumnWiseArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    int row = 3, col = 3;
    printColumnWiseArray(arr, row, col);
    return 0;
}