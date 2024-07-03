#include <iostream>
using namespace std;

#include "2_header.h"

int main(){

    // 藉由指標控制值
    int a = 10;
    showvalue(&a);

    int * b = new int;
    *b = 20;
    showvalue(b);

    // int * p;
    // p = &a;
    // p = b;

    int value = 1;

    passByValue(value);
    cout<<value<<endl; 

    passByPoint(&value); // 使用 pointer_2_header.h 裡的 passByValue 無法直接改變 value 的值
    cout<<value<<endl;


    // 使用函數指標
    int * i = getAddressA();
    cout<<*i<<endl;
    delete i; // 釋放使用的記憶體空間

    int * j = getAddressB();
    *j = 200;
    cout<<*j<<endl;
    delete j; // 釋放使用的記憶體空間

    // int * k = getAddressC(); // 不能 return 區域變數的記憶體位置，因為區域變數用完就沒了，無法存取到裡面的值
    // cout<<*j<<endl;

    int * m = new int;
    *m = 1;
    int * n = getAddressD(m); // 標頭檔裡的函式有設 const ，所以 m 的值不會因為此函數而被改掉
    cout<<*n<<endl;

    const int * f = getAddressE(m); // 標頭檔裡的函式有設 const ，所以 m 的值不會因為此函數而被改掉，同時 return 的值也被設 const ，所以整個也要設 const
    cout<<*f<<endl;
    // *f = 10; // 會編譯錯誤


    return 0 ;
}