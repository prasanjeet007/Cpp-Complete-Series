#include <iostream>
using namespace std;
int binarySearch(int arr[][3], int size, int col, int target)
{
    int currentNumber = 0;
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int i = mid / col;
        int j = mid % col;
        currentNumber = arr[i][j];
        if (currentNumber == target)
        {
            return 1;
        }
        else if (target > currentNumber)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}
int main()
{
    int row = 3, col = 3;
    int arr[3][3] = {{10, 20, 30},
                     {40, 50, 60},
                     {70, 80, 90}};
    int target = 10;
    int size = (row * col);
    int result = binarySearch(arr, size, col, target);
    if (result)
    {
        cout << "Target Found " << endl;
    }
    else
    {
        cout << "Target Not Found " << endl;
    }
    return 0;
}