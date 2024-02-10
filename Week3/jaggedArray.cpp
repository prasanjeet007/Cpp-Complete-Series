#include <iostream>
#include <vector>
using namespace std;
void printTwoArray(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> arr(5);
    vector<int> v1(4, 0);
    vector<int> v2(3, 0);
    vector<int> v3(5, 0);
    arr.push_back(v1);
    arr.push_back(v2);
    arr.push_back(v3);
    printTwoArray(arr);
    return 0;
}