#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int data[5] = {21, 5, 46, 8, 15};
    int num, i, status;
    cout << "請輸入數字";
    cin >> num;

    for(i = 0; i < 5; i++)
    {
        if(num == data[i])
        {
            cout << "為陣列中的第" << i+1 << "個數字";
            status = 1;
        }
    }
    if(status != 1)
        cout << "不在陣列中";
    return 0;
}