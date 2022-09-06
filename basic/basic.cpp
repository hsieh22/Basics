#include<iostream>
#include<cstdlib>
#include<cmath>
#include <map>
#include <string>
#include <vector>
#include <list>
using namespace std;

/* Switch Case
int x;
x = 2;
switch(x + 1){
    case 1:
        cout << "1";
        break;
    case 2:
        cout << "2";
        break;
    case 3:
        cout << "3";
    default:
        cout << "This is the default case.";
}
*/


/* In C++, single quotation marks indicate a character; double quotes create a string literal. 
While 'a' is a single a character literal, "a" is a string literal. */

/* The <string> library is included in the <iostream> library, 
so you don't need to include <string> separately, if you already use <iostream>. */

/* If an integer value is assigned to a Boolean, 0 becomes false 
and any value that has a non-zero value becomes true. */





/* Array
int a[5];
int b[5] = {11, 45, 32, 67, 38};
int b[] = {11, 45, 32, 67, 38}; //If you omit the size of the array, an array just big enough to hold the initialization is created.
b[3] = 42;
cout << b[0] << b[3];

//Multi-Dimensional Arrays
int arr[3][4];
int x[2][3] = {
    {1,2,3},    //1st row
    {4,5,6}     //2nd row
};
cout << x[0][2];

For loop  for( auto &y : x )
https://docs.microsoft.com/zh-tw/cpp/cpp/range-based-for-statement-cpp?view=msvc-170

*/





/*Pointers
https://kopu.chat/c%e8%aa%9e%e8%a8%80-%e8%b6%85%e5%a5%bd%e6%87%82%e7%9a%84%e6%8c%87%e6%a8%99%ef%bc%8c%e5%88%9d%e5%ad%b8%e8%80%85%e8%ab%8b%e9%80%b2%ef%bd%9e/
https://kopu.chat/c-%e8%aa%9e%e8%a8%80%ef%bc%9a%e7%b5%90%e6%a7%8b%ef%bc%88struct%ef%bc%89%e8%87%aa%e8%a8%82%e4%b8%8d%e5%90%8c%e8%b3%87%e6%96%99%e5%9e%8b%e6%85%8b%e7%b6%81%e4%b8%80%e8%b5%b7/
https://kopu.chat/c-%e8%aa%9e%e8%a8%80%ef%bc%9a%e7%b5%90%e6%a7%8b%e8%ae%8a%e6%95%b8%e8%88%87%e6%8c%87%e6%a8%99/
https://kopu.chat/c-%e8%aa%9e%e8%a8%80%ef%bc%9a%e9%8f%88%e7%b5%90%e4%b8%b2%e5%88%97linked-list%e7%9a%84%e5%bb%ba%e7%ab%8b%e8%88%87%e5%88%aa%e9%99%a4/

https://openhome.cc/Gossip/CppGossip/Pointer.html
https://openhome.cc/Gossip/CppGossip/newDelete.html


int score = 5;
cout << &score; //This outputs the memory address, which stores the variable score.
//All pointers share the same data type - a long hexadecimal number that represents a memory address.

//A pointer is a variable, and like any other variable, it must be declared before you can work with it.
//The asterisk sign is used to declare a pointer 
int score = 2;
int *ip;    //"*"用於宣告Pointer，寫成int ip; ip = &score 會報錯
ip = &score;
cout << ip;
//或是寫成
int score = 2;
int *ip = &score;   //寫成int ip = &score 會報錯
cout << ip;

Contents-of (or dereference) operator (*): returns the value of the variable located at the address specified by its operand.
The asterisk (*) is used in declaring a pointer for the simple purpose of indicating that it is a pointer 
(The asterisk is part of its type compound specifier). 
Don't confuse this with the dereference operator, which is used to obtain the value located at the specified address. 
They are simply two different things represented with the same sign.

int var = 50;
int  *p;
p = &var;
cout << var << endl;    // Outputs 50 (the value of var)
cout << p << endl;  // Outputs 0x7ff7bb2c2928 (var's memory location)
cout << *p << endl;     //Outputs 50 (the value of the variable stored in the pointer p) 

The dereference operator (*) is basically an alias for the variable the pointer points to.
As p is pointing to the variable x, dereferencing the pointer (*p) is representing exactly the same as the variable x.
int x = 5;
int *p = &x;
x = x + 4;
x = *p + 4;
*p = *p + 4;    //All three of the preceding statements are equivalent

Dynamic memory, new and delete

int *ptr = new int;     //跟記憶體要一個用來存放 4 個 byte 的 int 型變數所需要的空間，並傳回該空間的地址，再把地址存入指標 ptr 裡面。
int *ptr = new int(20);    //指定儲存值
delete ptr;     //frees up the memory, but does not delete the pointer (ptr is a dangling pointer)
ptr = new int;  //reuse for a new address

int *p = NULL;  // Pointer initialized with NULL
p = new int[20] // 動態配置陣列
delete [] p;    // Delete array

*/


/*
int arr[3] = {10,20,30}; 
[i]代表將pointer移動i，在對其dereference(*) ，亦即 arr[i] = *(arr+i)
arr : 為指向陣列首項的pointer 為0x7ff7b3e0291c
arr[1] : 將 0x7ff7b3e0291c 右移1 得到0x7ff7b3e02920 ，再對其dereference得到 20

ptr = &arr 為指向整個陣列的pointer {0x7ff7b3e0291c,0x7ff7b3e02920,0x7ff7b3e02924}
*ptr = *&arr = arr = &arr[0] = 0x7ff7b3e0291c
**ptr = *arr = 20

ptr+1 : 把pointer右移1 得到{0x7ff7b3e02928,0x7ff7b3e0292c,0x7ff7b3e02930}
*(ptr+1) : 對{0x7ff7b3e02928,0x7ff7b3e0292c,0x7ff7b3e02930} dereference 得到 0x7ff7b3e02928
**(ptr+1) : 對 0x7ff7b3e02928 dereference 得到 undefined value (because there is nothing there)

&arr[0] : 將&arr右移0 得到{0x7ff7b3e0291c,0x7ff7b3e02920,0x7ff7b3e02924} 再對其dereference 得到10 在對其取址得到 0x7ff7b3e0291c
ptr[1] : 將pointer移i 再* (dereference) ，即pointer +1後指向{0x7ff7b3e02928,0x7ff7b3e0292c,0x7ff7b3e02930} 再dereference 得到 0x7ff7b3e02928
*(ptr[1]): 對 0x7ff7b3e02928 dereference 得到 undefined value (because there is nothing there)
(*ptr)[1] : (*ptr)得到arr，再將把pointer右移1並dereference 得到20

*/


/* Vector

#include <algorithm>
#include <vector>

//Find
//find(vec.begin(), vec.end(), item) != vec.end() // This returns an iterator to the first element found. 
//If not present, it returns an iterator to one-past-the-end.

//code : 
if ( find(vec.begin(), vec.end(), item) != vec.end() )
    do_this();
else
    do_that();

*/





/* Map  

//Maps are associative containers that store elements formed by a combination of a key value and a mapped value
//Tutorial : https://youtu.be/7mwgA9XFIEQ     Learn C++ With Me #17 - Maps  by Tech With Tim

#include <map>

//Creating Maps
map <int, string> mp;

//Inserting Map Pairs
mp[2] = "Steve";   
mp[3] = "Ken";
mp[3] = "Mario";    //若key值已存在，覆蓋原資料
mp.insert(pair<int, string>(5, "Joe"));
mp.insert(pair<int, string>(1, "Mark"));
mp.insert(pair<int, string>(1, "Ben"));     //若key值已經存在，回傳"失敗"

//Accessing Map Values
cout << mp[1] << "  " << mp[3] << endl;
cout << mp[10]; //不存在的key將回傳0

//Erasing Map Pairs
mp.erase(1);
//mp.clear()    //remove everything
cout << "if empty : " << mp.empty() << endl; //return 1 if map is empty, return 0 if it is not empty

//Iterating Through Maps
for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
    cout << (*itr).first << " : ";
    cout << itr -> second << endl;  //(*itr).second 等同於 itr -> second
}

//Count and Find
//使用count，返回的是被查詢key的個數。如果有，返回1；否則，返回0。注意，map中不存在相同的key，所以返回值只能是1或0。
//使用find，返回的是被查詢key的位置，沒有則返回map.end()。
int target = 2;
if(mp.count(target))
    cout << "Key " << target << " is in the map." << endl;
else
    cout << "Key " << target << " is not in the map." << endl;

auto iter = mp.find(target); //出現時，它返回資料所在位置，如果沒有，返回 iter 與 end() 函數的返回值相同。
if(iter != mp.end()) 
    cout << "Find. The value is : " << iter -> second << endl;
else
    cout << "Do not find." << endl;

*/





/* String
//https://ithelp.ithome.com.tw/articles/10217014
#include <string>
string x = "abcde";
cout << x << x.length() << x[1] << endl;    //return abcde5b
for(int i = 0; i < x.length(); ++i) {
    cout << x[i] << endl;
}

for(char & c : x)
    cout << c << endl;

string s = "abc";

cout << s.find("c") << endl;
cout << s.find("x") << endl;

if(s.find("x") == string::npos)
    cout << "no found";
*/






/* Functions


You must declare a function prior to calling it.
Putting the declaration after the main() function results in an error.
A function declaration, or function prototype, tells the compiler about a function name and how to call the function. 
The actual body of the function can be defined separately.

There are two ways to pass arguments to a function as the function is being called.
By value: A copy of the argument is passed to the function, the original argument is not modified by the function.
By reference: This method copies the reference of an argument into the formal parameter. Inside the function, the reference is used to 
              access the actual argument used in the call. So, changes made to the parameter also affect the argument.

void func1(int x) {     //By value
    x = 10;
}
void func2(int *x) {    //By reference
    *x = 20;
}
void func3(int &x) {    //By reference
    x = 30;
}
int main(){
    int x = 0;
    func1(x);
    cout << x;      //output 0
    func2(&x);
    cout << x;      //output 20
    func3(x);
    cout << x;      //output 30

    return 0; 
}

In general, passing by value is faster and more effective. Pass by reference when your function needs to modify the argument, 
or when you need to pass a data type, that uses a lot of memory and is expensive to copy.


A recursive function in C++ is a function that calls itself. A base case is necessary for real recursion, or the recursion will keep running forever.

*/





/* Class
It's possible to have multiple constructors that take different numbers of parameters.

*/


class Fruit {       //Based class
    private:    //access only within that class
        string Color;
        list <string> Producers;
    protected:  //accessible in derived class
        string Name;
        int Amounts;
    public:     //can access outside the class
        Fruit(string name, string color) {      //constructors
            Name = name;
            Color = color;
            Amounts = 0;
        }
        void GetInfo() {        //methods
            cout << "Name : " << Name << endl;
            cout << "Color : "  << Color << endl;
            cout << "Amounts : " << Amounts << endl;
            cout << "Producers : " << endl;
            for(string person : Producers) {
                cout << person << endl;
            }
        }
        void Buy() {
            Amounts++;
        }
        void Sell() {
            if(Amounts > 0)
                Amounts--;
            else
                cout << "Amount of " << Name << " = 0 " << endl;
        }
};

class PeeledFruit: public Fruit {       //Derived class
    public:
        PeeledFruit(string name, string color): Fruit(name, color) {    //constructors
        }
        void Eat() {
            if(Amounts > 0) {
                cout << "Peeling and eating the " << Name << endl;;
                Amounts--;  
            }
            else
                cout << "No more " << Name << endl;
        }
};

class Berries : public Fruit {      //Derived class
    public:
        Berries(string name, string color): Fruit(name, color) {
        }
        void Eat() {        //polymorphisam
            if(Amounts > 0) {
                cout << "Cleaning and eating the " << Name << endl;;
                Amounts--;    
            }
            else
                cout << "No more " << Name << endl;
        }
};




 int main(){


    Fruit fruit1("Strawberry", "Red");
    
    PeeledFruit Pfruit1("Banana", "Yellow");
    Berries Bfruit1("Blueberrues", "Blue");
    Pfruit1.Buy();
    Bfruit1.Buy();
    
    Pfruit1.GetInfo();
    Bfruit1.GetInfo();
    cout << endl;
    Pfruit1.Eat();
    Bfruit1.Eat();
    cout << endl;
    Fruit * ptr1 = & Pfruit1;
    ptr1->Buy();
    ptr1->GetInfo();


    return 0; 

 }



