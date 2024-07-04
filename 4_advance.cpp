// 指標的指標

#include <iostream>
using namespace std;

int main(){
    
    // 定義
    int ** a;
    a = new int *;
    *a = new int;
    **a = 10;
    cout<<a<<endl;
    cout<<*a<<endl;
    cout<<**a<<endl;

    // 指標的指標用來儲存指標的記憶體位置
    int * b = new int;
    *b = 20;
    a = &b;
    cout<<**a<<endl;

    // void 宣告 *
    void * v; // 通用型別的值標，所以必須先指定型別，才能取裡面的值
    v = b;
    cout<<b<<endl; // 輸出和 27 行相同
    cout<<v<<endl; // 輸出和 26 行相同

    cout<<*b<<endl;
    cout<< *((int*)v) <<endl; // 必須先指定型別，才能取裡面的值


    // 指標陣列 （和 3_DynamicArray_ArrayParameters.cpp 不同 ）
    int * array[10];
    for(int i = 0;i<10;i++){
        array[i] = new int;
        *array[i] = i + 1;
    }
    for(int i = 0;i<10;i++){
        cout<<*array[i]<<endl;
    }

    // 動態指標陣列
    int ** pArray;
    pArray = new int*[10]; // new 指標陣列，給指標的指標 
    for(int i = 0;i<10;i++){
        pArray[i] = new int;
        *pArray[i] = i + 1;
    }
    for(int i = 0;i<10;i++){
        cout<<*pArray[i]<<endl;
    }

    return 0 ;
}