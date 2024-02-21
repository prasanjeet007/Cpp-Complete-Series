#include <iostream>
using namespace std;
int duplicateNumber(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        if (arr[left] == arr[right])
        {
            return arr[left];
        }
        else
        {
            left++;
            right--;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {23, 34, 5, 8, 9, 17, 13, 23, 10, 7, 6};
    int size = sizeof(arr) / sizeof(int);
    int duplicateNum = duplicateNumber(arr, size);
    duplicateNum ? cout << "Missing number found " << duplicateNum << endl : cout << "Missing number is not found" << endl;
    return 0;
}