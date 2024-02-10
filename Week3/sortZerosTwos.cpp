#include <iostream>
using namespace std;
void sortZerosOnes(int arr[], int size)
{
    int left = 0;
    int inx = 0;
    int right = size - 1;
    while (inx < right)
    {
        if (arr[inx] == 2)
        {
            swap(arr[inx], arr[right]);
            right--;
        }
        else if (arr[inx] == 0)
        {
            swap(arr[inx], arr[left]);
            inx++;
            left++;
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
    int arr[] = {1, 0, 2, 0, 0, 2, 0, 1, 1, 0, 2, 2, 1, 1, 0, 0, 1, 2, 2, 0};
    int size = sizeof(arr) / sizeof(int);
    sortZerosOnes(arr, size);
    printArray(arr, size);
    return 0;
}