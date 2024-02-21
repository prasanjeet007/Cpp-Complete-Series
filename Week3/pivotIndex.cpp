#include <iostream>
#include <vector>
using namespace std;
// int pivotIndex(int arr[], int size)
// {
//     for (int i = 1; i < size; i++)
//     {
//         int leftSum = 0;
//         int rightSum = 0;
//         for (int left = i - 1; left >= 0; left--)
//         {
//             leftSum += arr[left];
//         }
//         for (int right = i + 1; right < size; right++)
//         {
//             rightSum += arr[right];
//         }
//         if (leftSum == rightSum)
//             return i;
//     }
//     return -1;
// }
int prefixSumApproach(int arr[], int size)
{
    vector<int> leftSum(size, 0);
    vector<int> rightSum(size, 0);
    for (int left = 1; left < size; left++)
    {
        leftSum[left] = leftSum[left - 1] + arr[left - 1];
    }
    for (int right = size - 2; right >= 0; right--)
    {
        rightSum[right] = rightSum[right + 1] + arr[right + 1];
    }
    for (int i = 0; i < size; i++)
    {
        cout << leftSum[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << rightSum[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        if (leftSum[i] == rightSum[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 7, 3, 6, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    int pivotInx = prefixSumApproach(arr, size);
    cout << "Pivot Inx and Elem " << pivotInx << " " << arr[pivotInx] << endl;
    return 0;
}