#include <bits/stdc++.h>


using namespace std;

int main(){
    [](){
        cout << "Testing Something" << endl;
    }();
    
   auto funct1 =  [](){
        cout << "Hello World!" << endl;
    };
   funct1();
    
    //capture lsit is help us to use the outside code  and
    int c = 42;

   auto funct2 = [c](string name){
        cout << "Say my name : "<< name << endl;
        cout << "C value : "<< c << endl;
    };
   
     [funct2](){
         cout << "We are going to call funct2" << endl;
         funct2("Abdirahman");
         cout << "Now we done calling funct2" << endl;
     }();
    
    int a = 18;
    string name = "test";
    string name1 = "test2";
    
    [=](){
        cout << "name : " << name << endl;
        cout << "name1 : " << name << endl;
        cout << "a value : " << a << endl;
        cout << "c value : " << c << endl;
    }();
    
        
    return 0;
}