#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 0, 0, 0, 0, 1, 0, 0, 1};
    int length = 9;
    int index = 0;
    int zeroCount = 0;
    int oneCount = 0;
    while (index < length)
    {
        if (arr[index] == 0)
        {
            zeroCount++;
        }
        else
        {
            oneCount++;
        }
        index++;
    }
    cout << "ZeroCount is " << zeroCount << " "
         << "One Count is " << oneCount << endl;
    return 0;
}