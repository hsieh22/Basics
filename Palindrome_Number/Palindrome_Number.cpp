#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

bool isPalindrome(int x)
{  
    int origin = x;
    int reverse = 0;
    int rem;

    while(x != 0)
    {
        rem = (int)x % 10;
        reverse = reverse * 10 + rem;
        x = x / 10;
    }

    if(origin == reverse)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cout << "請輸入一個數字 : ";
    cin >> n;

    if(n >= 0)
    {
        if(isPalindrome(n))
            cout << n << " is a Palindrome";
        else
            cout << n << " is not a Palindrome";
    }
    else
        cout << "請輸入正整數 !";
    
    return 0;
}
