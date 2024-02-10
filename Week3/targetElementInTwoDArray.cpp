#include <iostream>
using namespace std;
bool findTarget(int arr[][3], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
                return true;
        }
    }
    return false;
}
int main()
{
    int arr[][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    int row = 3, col = 3;
    int target = 170;
    bool result = findTarget(arr, row, col, target);
    result ? cout << "Target found" : cout << "Target not found" << endl;
    return 0;
}