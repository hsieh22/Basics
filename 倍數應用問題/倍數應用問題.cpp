/*若某位同學40公斤，且體重年增率固定為1%，則至少要多少年後，其體重才會變成現有的1.5倍?*/

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    double year = 0;
    double weight = 40;

    while(weight <= 60)
    {
        year ++;
        weight = weight * 1.01;
    }
    cout << year + 1 << " 年";
    cout << weight << " 公斤";

    return 0;
}