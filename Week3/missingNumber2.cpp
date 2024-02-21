#include <iostream>
using namespace std;
void missingNumber(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int totalSum = ((size) * (size + 1)) / 2;
    int missingNumber = totalSum - sum;
    cout << "Missing number is " << missingNumber << endl;
}
int main()
{
    int arr[] = {0, 3, 4, 5, 7, 8, 9, 1, 2};
    int size = sizeof(arr) / sizeof(int);
    missingNumber(arr, size);
    return 0;
}