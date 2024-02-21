#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int target = 20;
    int size = sizeof(arr) / sizeof(int);
    int inx = binarySearch(arr, size, target);
    if (inx == -1)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found at " << inx << endl;
    }
    return 0;
}