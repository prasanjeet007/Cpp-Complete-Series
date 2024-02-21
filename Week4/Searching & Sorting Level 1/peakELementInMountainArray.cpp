#include <iostream>
using namespace std;
int peakElementInMountainArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {

        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return mid;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 40, 30};
    int size = sizeof(arr) / sizeof(int);
    int inx = peakElementInMountainArray(arr, size);
    cout << "Found at " << inx << endl;
    return 0;
}