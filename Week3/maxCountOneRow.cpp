#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
void printArray(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}
void oneCount(int arr[][4], int row, int col)
{
    int maxCountRow = INT_MIN;
    int rowNum = -1;
    vector<int> v1;
    for (int i = 0; i < row; i++)
    {
        int count = 0;
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (count > maxCountRow)
        {
            maxCountRow = count;
            rowNum = i;
                }
    }
    v1.push_back(rowNum);
    v1.push_back(maxCountRow);
    printArray(v1);
}

int main()
{
    int arr[][4] = {{1, 0, 0, 1}, {1, 1, 1, 0}, {0, 0, 0, 0}, {1, 1, 1, 1}};
    oneCount(arr, 4, 4);
    return 0;
}