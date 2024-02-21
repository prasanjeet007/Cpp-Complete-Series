#include <iostream>
using namespace std;
int firstOccurence(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
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
    return ans;
}
int lastOccurence(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
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
    return ans;
}
int main()
{
    int arr[] = {10, 20, 20, 20, 30, 30, 30, 30, 40, 50, 60, 60, 60};
    int target = 10;
    int size = sizeof(arr) / sizeof(int);
    int firstOcc = firstOccurence(arr, size, target);
    int lastOcc = lastOccurence(arr, size, target);
    int totalOcc = lastOcc - firstOcc + 1;
    if (totalOcc == 0)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Occurences are  " << totalOcc << endl;
    }
    return 0;
}