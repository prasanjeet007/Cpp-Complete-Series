#include <iostream>
using namespace std;
void printSum(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "( " << arr[i] << ", " << arr[j] << " )";
            }
        }
    }
}
int main()
{
    int arr[] = {10, 3, 4, 5, 1, 9, 8, 6, 7};
    int size = sizeof(arr) / sizeof(int);
    int target = 13;
    printSum(arr, size, target);
    return 0;
}