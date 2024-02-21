#include <iostream>
using namespace std;
int pivotIndex(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    int ans = -1;
    while (start <= end)
    {
        if (start == end)
            return start;
        int mid = start + (end - start) / 2;
        if (arr[mid] < (mid > 0 && arr[mid - 1]))
        {
            return mid - 1;
        }
        else if (arr[mid] > (mid < end && arr[mid + 1]))
        {
            return mid;
        }
        else if (arr[start] < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return ans;
}
int binarySearch(int arr[], int start, int end, int target)
{
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (target > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return ans;
}
int main()
{
    int arr[] = {12, 14, 16, 2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(int);
    int target = 12;
    int result;
    int pivotInx = pivotIndex(arr, size);
    if (arr[0] <= target && target <= arr[pivotInx])
    {
        result = binarySearch(arr, 0, pivotInx, target);
    }
    else
    {
        result = binarySearch(arr, pivotInx + 1, size - 1, target);
    }
    if (result == -1)
    {
        cout << "Element Not found " << endl;
    }
    else
    {
        cout << "Element Found " << endl;
    }
}