#include <iostream>
using namespace std;
void extremePrintArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        if (left == right)
        {
            cout << arr[left] << " ";
        }
        else
        {
            cout << arr[left] << " ";
            cout << arr[right] << " ";
        }
        left++;
        right--;
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {80, 30, 50, 10, 70};
    int size = sizeof(arr) / sizeof(int);
    extremePrintArray(arr, size);
    // printArray(arr, size);
    return 0;
}