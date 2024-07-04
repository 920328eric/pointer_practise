#include <iostream>
using namespace std;

double getAverage(int scores[],int length){ 
// double getAverage(int * scores,int length){ //比較不明確是接收陣列 （型別可以用 * 取代 []）
    double total = 0;
        for(int i=0;i<length;i++){
            total+=scores[i];
        }
        return total / length;
}
