#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
    double total = 0;
    double avg;
    int score[5];
    for(int i=0; i <= 4; i++ )
    {
        cout << "請輸入第" << i+1 << "位學生的成績 : ";
        cin >> score[i];
        total = total + score[i];
    }
    avg = total / 5;
    cout << "班上的平均成績為" << avg << "分";
    return 0;
}