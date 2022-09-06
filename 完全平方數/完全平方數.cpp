#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int x;
    int i = 0;
    cout << "請輸入一個正整數\n";
    cin >> x;

    for(i = 1; i <= x; i++)
    {
        if(pow(i,2) == x)
        {
            cout << x << "為" << i << "的完全平方數";
            break;
        }
        else if (i == x)
            cout << x << "非完全平方數";
    }
    return 0;
}