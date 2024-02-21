#include <iostream>
using namespace std;
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
    int arr[] = {1, -9, 3, -8, 5, 4, 0, -10, 3, -7};
    int size = sizeof(arr) / sizeof(int);
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
    printArray(arr, size);
    return 0;
}