// 為了能釋放記憶體，所以才用指標（動態配置記憶體）
// 4_advance.cpp 才有指標陣列

#include <iostream>
using namespace std;

#include "3_header.h";

int main(){

    int classCount;
    cout<<"請輸入班級人數=>";
    cin>>classCount;
    double * ave = new double[classCount]; // 動態陣列，用 new 配置記憶體空間

    for(int j=0;j<classCount;j++){
        int count;
        cout<<"請輸入學生人數=>";
        cin>>count;

        int * scores = new int[count]; // 動態陣列，用 new 配置記憶體空間
        for(int i=0;i<count;i++){
            cout<<"請輸入學生成績=>";
            cin>>scores[i];
        }

        ave[j] = getAverage(scores,count); // 3_header.h 裡的 getAverage 是接收陣列，雖然指標也可以，但陣列必較明確

        delete[] scores; // 用指標釋放空間
    }

    for(int i=0;i<classCount;i++){
        cout<<ave[i]<<endl;
    }

    return 0 ;
}