#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;
double maximumAverage(int arr[], int size, int k)
{
    int i = 0;
    int j = k - 1;

    int finalSum = INT_MIN;

    while (j < size)
    {
        int k = i;
        int sum = 0;
        while (k <= j)
        {
            sum += arr[k];
            k++;
        }
        if (sum > finalSum)
        {
            finalSum = sum;
        }
        i++;
        j++;
    }
    return (finalSum / (float)k);
}
int main()
{
    int arr[] = {1, 12, -5, -6, 50, 3};
    int size = sizeof(arr) / sizeof(int);
    int k = 4;
    double maxAvg = maximumAverage(arr, size, k);
    cout << maxAvg << setprecision(2) << endl;
}