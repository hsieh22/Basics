#include <iostream>
#include <cstdlib>
using namespace std;

void sum(int first, int end, int diff)
{
    int i, total = 0;
    for(i = first; i <= end; i = i + diff)
        total = total + i;
    
    cout << first << " + " << first + diff << " + ... + " << end << " = " << total << endl;
}

int main()
{
    sum(1,10,1);
    sum(1,99,2);
    sum(-10,10,1);
}

