/*
--Types of Errors:
    1. Compile Time Error (Syntex Error)
    2. Runtime Error (logical Error)
    3. Warnings
*/

#include <iostream>
using namespace std;


int main(){
    //Compile Time Error
    cout <<"Hello World" <<endl;
    
    //RunTime Errors (This Error is Wrong the logic that youre traying to implement)
    int value = 7/0;
    cout<< "value: " << value <<endl;
    return 0;
}