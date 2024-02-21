#include <iostream>
using namespace std;
int binarySearchSpace(int start, int end)
{
    int number = end;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid * mid == number)
            return mid;
        else if (mid * mid < number)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int number = 189;
    int squareRoot = binarySearchSpace(0, number);
    cout << "Square root of " << number << " is " << squareRoot << endl;
    return 0;
}