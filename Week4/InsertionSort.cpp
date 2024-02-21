#include <iostream>
#include <limits>
using namespace std;
void insertionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int key = arr[i + 1];
        int j = i;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);
    insertionSort(arr, size);
    printArr(arr, size);
    return 0;
}