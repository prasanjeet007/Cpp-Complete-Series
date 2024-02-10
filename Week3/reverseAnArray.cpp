#include <iostream>
using namespace std;
void reverseArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        int temp;
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        // swap(arr[left], arr[right]);
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
    int arr[] = {60, 80, 3, 10, 70};
    reverseArray(arr, 5);
    printArray(arr, 5);
    return 0;
}