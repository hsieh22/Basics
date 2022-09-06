#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
   int i;
   int j;
   for(i=1; i<=11; i++)
   {
        for(j = 1; j <= abs(i-6); j++)
            cout << " ";
        for(j = 1; j<= 11 - 2 * abs(i-6); j++)
            cout << "*";
            
    cout << endl;
    }
    return 0;
}