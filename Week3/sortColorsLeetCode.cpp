#include <iostream>
using namespace std;
void sortColors(int arr[], int size)
{
    int left = 0;
    int inx = 0;
    int right = size - 1;
    while (inx <= right)
    {
        if (arr[inx] == 0)
        {
            swap(arr[inx], arr[left]);
            left++;
            inx++;
        }
        else if (arr[inx] == 2)
        {
            swap(arr[inx], arr[right]);
            right--;
        }
        else
        {
            inx++;
        }
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int arr[] = {2, 0, 1, 0, 1, 1, 2, 0, 0, 2};
    int size = sizeof(arr) / sizeof(int);
    sortColors(arr, size);
    printArray(arr, size);
    return 0;
}