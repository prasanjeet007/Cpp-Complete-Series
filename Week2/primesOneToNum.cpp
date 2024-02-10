#include <iostream>
using namespace std;
void printAllPrimes(int number)
{
    if (number == 1 || number == 2 || number == 3)
    {
        cout << number << " is a prime" << endl;
        return;
    }
    bool isPrime;
    for (int i = 4; i <= number; i++)
    {
        isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime)
        {
            cout << i << " is a prime" << endl;
        }
    }
}
int main()
{
    int num;
    cout << "Enter a number \n";
    cin >> num;
    printAllPrimes(num);
    return 0;
}