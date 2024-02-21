#include <iostream>
#include <limits>
using namespace std;
// double getMaximumAverage(int arr[], int k, int size)
// {
//     int i = 0;
//     int j = k - 1;
//     int finalSum = INT_MIN;
//     while (j < size)
//     {
//         int k = i;
//         int sum = 0;
//         while (k <= j)
//         {
//             sum += arr[k];
//             k++;
//         }
//         if (sum > finalSum)
//         {
//             finalSum = sum;
//         }
//         i++;
//         j++;
//     }

//     return (finalSum / float(k));
// }
double silidingWindowMethod(int arr[], int k, int size)
{
    int i = 0;
    int j = k - 1;
    int finalSum = INT_MIN;
    int sum = 0;
    for (int y = i; y <= j; y++)
    {
        sum += arr[y];
    }
    if (sum > finalSum)
    {
        finalSum = sum;
    }
    j++;
    while (j < size)
    {
        sum -= arr[i++];
        sum += arr[j++];
        if (sum > finalSum)
        {
            finalSum = sum;
        }
    }
    return (finalSum / (float)k);
}
int main()
{
    int arr[] = {1, 12, -5, -6, 50, 3};
    int k = 4;
    int size = sizeof(arr) / sizeof(int);
    double avg = silidingWindowMethod(arr, k, size);
    cout << "Max Average is " << avg << endl;
    return 0;
}