#include <iostream>
using namespace std;

#include "pointer_2_header.h"

int main(){
    int a = 10;
    showvalue(&a);

    int * b = new int;
    *b = 20;
    showvalue(b);

    // int * p;
    // p = &a;
    // p = b;

    

    return 0 ;
}