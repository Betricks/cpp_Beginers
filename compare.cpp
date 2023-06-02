#include <iostream>

using namespace std;

void maxs(int a, int b){
    if(a < b){
        cout << "Max is : " << b <<endl;
    }else if(a > b){
        cout << "Max is : " << a <<endl;
    }else{
        cout << "There is no Max ::" <<endl;
    }
    
}



void mins(int a, int b){
    if(a < b){
        cout << "Min is : " << b <<endl;
    }else if(a > b){
        cout << "Min is : " << a <<endl;
    }else{
        cout << "There is no Min .." <<endl;
    }
}