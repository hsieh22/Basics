#include <iostream>
#include <cstdlib>
using namespace std;

double tran()
{
    double Celsius;
    double Fahrenheit;
    cin >> Celsius;
    Fahrenheit = 9 * Celsius / 5 + 32;
    cout << Fahrenheit;
    return 0;

}

int main()
{
    cout << "請輸入攝氏溫度" << endl; 
    tran();
    return 0;
}


