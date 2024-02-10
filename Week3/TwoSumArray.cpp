#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 5, 6, 9, 3, 0};
    int sum = 11;
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << "Pair sum of " << sum << " are " << arr[i] << " and " << arr[j] << endl;
            }
        }
    }
    return 0;
}