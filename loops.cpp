//we are going to use loops like [for loop, while loop, do while loop]

#include <iostream>
#include <functions.cpp>

using namespace std;

int main(){
    // //first we going to try for loop
    // for (unsigned int i = 0; i < 10; i++){
    //     cout<<"I Love C++"<<endl;
    // }
    
    
    // //second we are going to use while loop
    // const unsigned int counter = 10;
    // unsigned int i = 0;
    // while(i < counter){
    //     cout << "I Love c++ " <<endl;
    //     i++;
    // }
    const unsigned int counter1 = 10;
    unsigned int i = 0;
    do{
        cout<<"I Love C++"<<endl;
        i++;
    }while(i <= counter1);
    return 0;
}