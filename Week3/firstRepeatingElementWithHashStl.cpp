#include <iostream>
using namespace std;
int findFirstRepeatingElemWithSTLHash(int arr[], int size)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < size; i++)
    {
        if (hash[arr[i]] > 1)
        {
            return i + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 3, 4, 5, 3, 4, 1, 2};
    int size = sizeof(arr) / sizeof(int);
    int elemInx = findFirstRepeatingElemWithSTLHash(arr, size);
    cout << elemInx << endl;
    return 0;
}