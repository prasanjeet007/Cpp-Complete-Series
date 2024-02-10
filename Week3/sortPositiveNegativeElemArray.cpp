#include <iostream>
using namespace std;
void sortNegativePositiveArray(int arr[], int size)
{
    int inx = 0;
    int left = 0;
    while (inx < size)
    {
        if (arr[inx] < 0)
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
    int arr[] = {0, 10, -10, 20, -9, -8, 23, 70, 0};
    int size = sizeof(arr) / sizeof(int);
    sortNegativePositiveArray(arr, size);
    printArray(arr, size);
    return 0;
}