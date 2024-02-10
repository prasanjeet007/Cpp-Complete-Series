#include <iostream>
using namespace std;
void kiloMetersToMiles(int kilometers)
{
    double kmMilesValue = 1.60934;
    double miles = kilometers / kmMilesValue;
    cout << "Miles is " << miles << endl;
}
int main()
{
    int kiloMeters;
    cout << "Enter kilometers you want convert into miles " << endl;
    cin >> kiloMeters;
    kiloMetersToMiles(kiloMeters);
    return 0;
}