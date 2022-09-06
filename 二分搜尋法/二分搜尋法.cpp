// #include<iostream>
// #include<cstdlib>
// #include<cmath>
// #include<ctime>
// #include<iomanip>
// using namespace std;

// int main()
// {
//     int data[] = {2, 5, 18, 40, 89, 91, 96, 104, 116};  //  小到大排序
//     int number;
//     cout << "請輸入數字:" ;
//     cin >> number;
//     int left , right , mid;
//     left = 0;
//     right = 8;

//     do
//     {
//         mid = (left + right) /2;
//         if(number == data[mid])
//             break;

//         else if(number > data[mid])
//             left = mid + 1;

//         else
//             right = mid -1;
//     }
//     while(left <= right);

//     if(left <= right)
//         cout << number << "位於第" << mid+1 << "個位置";
//     else
//         cout << "不在資料中";

//     return 0;

// }

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int data[] = {12, 36, 38, 42, 53, 59, 61, 69, 85, 88, 97};
    int number, left, right, mid;
    left = 0;
    right = 10;
    cout << "糗輸入數字 : ";
    cin >> number;

    while(left <= right)
    {
        mid = (left + right) / 2;
        //cout << "mid:" << mid << "\n" ;
        if(number > data[mid])
            left = mid + 1;
        else if(number < data[mid])
            right = mid - 1;
        else        //number == data[mid]
            break;
    }

    if(left <= right)
        cout << number << "位於第" << mid +1 << "個位置";
    else    
        cout << number << "不在資料中";

    return 0;
}