//arrays are way to setup collections in c++
//arrays is used to store sequential values that has the same dataType

#include <iostream>

using namespace std;

int main(){
    
    
    int scores[10] = {20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
    
    // for(unsigned int i = 0; i<10; i++){
    //     cout<<"scores "<<i+1 <<" " <<scores[i]<<endl;
    // }
    
    // for (auto values : scores){
    //     cout<<"score "<<values<<endl;
    // }
    
    const int number[] = {0,1,2,3,4,5,6,7,8,9};
    cout<<number[8]<<endl;
    
    return 0;
}