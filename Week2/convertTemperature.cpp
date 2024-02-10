#include <iostream>
using namespace std;
void celcuistoFarenheit(double celcuis)
{
    double farenheit = (celcuis * 9 / 5) + 32;
    cout << "Temperature in farenheit is " << farenheit << endl;
}
int main()
{
    int celcuis;
    cout << "Enter a celcuis which you want to enter \n";
    cin >> celcuis;
    celcuistoFarenheit(celcuis);
    return 0;
}