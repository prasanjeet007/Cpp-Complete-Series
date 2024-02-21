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
        if (arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }
        else if (arr[mid] > arr[mid + 1])
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
int main()
{
    int arr[] = {10};
    int size = sizeof(arr) / sizeof(int);
    int pivotInx = pivotIndex(arr, size);
    cout << "Pivot Index is " << pivotInx << endl;
}