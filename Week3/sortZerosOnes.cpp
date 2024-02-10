#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {0, 1, 1, 0, 0, 1, 0, 1, 1, 0};
    int size = sizeof(arr) / sizeof(int);
    int inx = 0;
    int right = size - 1;
    while (inx < right)
    {
        if (arr[inx] == 0)
            inx++;
        else if (arr[inx] == 1)
        {
            swap(arr[inx], arr[right]);
            right--;
        }
    }
    printArray(arr, size);
    return 0;
}