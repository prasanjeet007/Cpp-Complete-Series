#include <iostream>
using namespace std;
double areaOfCircle(int radius)
{
    const double PIE = 3.1416;
    return (PIE * radius * radius);
}
int main()
{
    int radius;
    double areaOfCircleResult;
    cout << "Enter a radius of a circle \n";
    cin >> radius;
    areaOfCircleResult = areaOfCircle(radius);
    cout << "Area of circle is " << areaOfCircleResult << "\n";
    return 0;
}
