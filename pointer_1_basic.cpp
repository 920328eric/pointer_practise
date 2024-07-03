#include <iostream>
using namespace std;

int main(){
    int a;
    a = 8;
    cout<<a<<endl;

    int * p,* l; // 存放記憶體位置的變數 ( * 中間有空格是宣告)
    p = &a; // 存放 a 的記憶體位置 ( p = address)
    cout<<p<<endl; // p = 0x16bd67288

    *p = 10; // 透過指標管理記憶體，動到指標裡的記憶體位置對應的值 (  *p = value   右側的值指派給 = 左側的指標所管理的記憶體空間)
    cout<< *p <<endl;  // 輸出指標裡的記憶體位置對應的值 // *p = 10


    // 宣告時直接賦予位置
    int * q = &a;
    *q = 20;
    cout<<a<<endl; // a = 20
    cout<<*q<<endl; // *q = 20


    // 配置新的記憶體空間給pointer
    int * r;
    r = new int; // new 配置新的記憶體空間
    *r = 100;
    cout<<r<<endl; // r = 0x14be05e50
    cout<<*r<<endl; // *r = 100
 

    // 
    int * s = r;
    *s = 200;
    cout<<*r<<endl; // *r = 200


    // 用 new 配置給指標的記憶體可以用delete釋放
    delete r; // 釋放 r 對應的空間，但 r 的指標值還存在
    cout<<r<<endl;    // r = 0x14be05e50    => 裡面的指標值還在
    cout<<*r<<endl;   // *r = 0          => 但指標值的空間裡的值無法存取了

    r=new int; // 如果要用，須重新配置空間
    *r = 300;


    // const 會指定變數的值是常數，並告訴編譯器防止程式設計人員修改它
    int * const m = new int; // 可以更改數值，無法更改指標
    *m = 100;
    *m = 200;
    cout<<*m<<endl;
    // delete m ;
    // m = new int; // 無法更改 m 因為 m 設置 const

    // const int * n = new int; // 可以更改指標，無法更改數值
    // *n = 100; // 無法更改 *n 的數值
    const int * n = m;
    cout<<*n<<endl; 
    n = s;
    cout<<*n<<endl;


    return 0 ;
}