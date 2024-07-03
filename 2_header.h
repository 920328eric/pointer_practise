// 標頭檔

#include <iostream>
using namespace std;

// void 為不回傳值 （不用寫 return）
void showvalue(int * p){
    cout<<*p<<endl;
}

void passByValue(int value){
    value += 100;
}

void passByPoint(int * pValue){
    *pValue += 100;
}

int * getAddressA(){
    int * p = new int ;
    *p = 100;
    return p;
}

int * getAddressB(){
    return new int;
}

// 不能 return 區域變數的記憶體位置，因為區域變數用完就沒了，無法存取到裡面的值

// int * getAddressC(){
//     int p = 8;
//      return &p; 
// }


// 藉由指標建立副本
int * getAddressD(const int * p){ // const 代表當參數的指標值不會被改變
    int * q = new int;
    *q = *p;
    *q += 100;
    return q; 
}

const int * getAddressE(const int * p){ // 代表當參數的指標值不會被改變，同時 return 的值也不會改變
    int * q = new int;
    *q = *p;
    *q += 100;
    return q; 
}