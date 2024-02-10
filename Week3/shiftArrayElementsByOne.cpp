#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(int);
    int newArr[size];
    int shiftByStep;
    cout << "enter a number which youy want to shift an array" << endl;
    cin >> shiftByStep;
    printArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        int newInx = (i + shiftByStep) % size;
        newArr[newInx] = arr[i];
    }
    printArray(newArr, size);
    return 0;
}