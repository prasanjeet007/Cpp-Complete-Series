#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number for factorial " << endl;
    cin >> num;
    vector<int> v1;
    int carry = 0;
    v1.push_back(1);
    for (int i = 2; i <= num; i++)
    {
        for (int j = 0; j < v1.size(); j++)
        {
            int x = v1[j] * i + carry;
            v1[j] = x % 10;
            carry = x / 10;
        }
        while (carry)
        {
            v1.push_back(carry % 10);
            carry /= 10;
        }
        carry = 0;
    }
    reverse(v1.begin(), v1.end());
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    return 0;
}