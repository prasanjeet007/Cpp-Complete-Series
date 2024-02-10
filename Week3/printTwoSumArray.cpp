#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i] << "," << arr[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}