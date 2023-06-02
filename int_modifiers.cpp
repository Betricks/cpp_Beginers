// Signed = this is you can assign variable with positive and negative numbers
// UnSigned = this modifier helps the variable to asign only positive numbers
// Short = this is used to lower the memory bits it takes to asign the variable
// Long = this is used to make the variable memory bits abit longer

// ( NB ) . ..Note that you can use theses modifiers only in number like [whole. decimal numbers];

#include <iostream>

using namespace std;

int main(){
    
    signed int value1 = 9;
    signed int value2 = -9;
    
    unsigned int value3 = 10;
    unsigned int value4 = -10;
    //see this will show error in the program becouse we asigned positive variable into negative numbers
    
    cout << "value1 : " << value1 << endl;
    cout << "value2 : " << value2 << endl;
    cout << "value3 : " << value3 << endl;
    cout << "value4 : " << value4 << endl;
    
    long int value5 = 79;
    short int  value6 = 8;
    
    return 0;
}