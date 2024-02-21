#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 3, 4};
    int size = sizeof(arr) / sizeof(int);
    int inx = 0;
    while (inx < size - 1)
    {
        if (arr[inx] > arr[inx + 1])
        {
            swap(arr[inx], arr[inx + 1]);
        }
        inx++;
    }
    inx = 0;
    while (inx < size)
    {
        if ((arr[inx] - inx) > 1)
        {
            cout << inx + 1 << endl;
        }
        inx++;
    }
    return 0;
}