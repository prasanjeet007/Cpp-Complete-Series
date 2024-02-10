#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 2, 3, 4, 3, 5, 5, 6, 7, 7, 8, 8, 9, 9, 6, 0, 0};
    int uniqueElement = 0;
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        uniqueElement = uniqueElement ^ arr[i];
    }
    cout << "Unique elem is " << uniqueElement << "\n";
    return 0;
}