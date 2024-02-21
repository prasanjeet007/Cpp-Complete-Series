#include <iostream>
using namespace std;
int missingElem(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int ans = size;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] - mid == 1)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans + 1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 9};
    int target = 20;
    int size = sizeof(arr) / sizeof(int);
    int inx = missingElem(arr, size, target);
    if (inx == -1)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "element is  " << inx << endl;
    }
    return 0;
}