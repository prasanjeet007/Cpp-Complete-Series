#include <iostream>
using namespace std;
int sumOfElem(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int arr[] = {0, 3, 1};
    int size = sizeof(arr) / sizeof(int);
    int sum = sumOfElem(arr, size);
    int totalSum = ((size) * (size + 1)) / 2;
    int missingNumber = totalSum - sum;
    cout << "Missing element is " << missingNumber << endl;
    return 0;
}