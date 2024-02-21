#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a[] = {1, 1, 1, 2, 2, 2, 3, 3, 4, 8, 8};
    int i = 0;
    int j = 1;
    int size = sizeof(a) / sizeof(int);
    while (j <= size)
    {
        if (a[i] == a[j])
        {
            j++;
        }
        else
        {
            i++;
            a[i] = a[j];
            j++;
        }
    }
    // int sizeCopy = sizeof(arr) / sizeof(int);
    for (int k = 0; k < i; k++)
    {
        cout << a[k] << " ";
    }
    return 0;
}