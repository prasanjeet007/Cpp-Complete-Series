#include <iostream>
using namespace std;
int findFirstRepeatingElem(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int num = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            if (num == arr[j])
            {
                return i + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    int missingNumberInx = findFirstRepeatingElem(arr, size);
    if (missingNumberInx != -1)
    {
        cout << "Found at " << missingNumberInx << endl;
    }
    else
    {
        cout << "Not Found " << missingNumberInx << endl;
    }
    return 0;
}