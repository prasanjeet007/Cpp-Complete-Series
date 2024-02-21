#include <iostream>
#include <limits>
using namespace std;
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minInx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minInx])
            {
                minInx = j;
            }
        }
        swap(arr[i], arr[minInx]);
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
    int arr[] = {44, 33, 55, 22, 11};
    int size = sizeof(arr) / sizeof(int);
    selectionSort(arr, size);
    printArr(arr, size);
    return 0;
}