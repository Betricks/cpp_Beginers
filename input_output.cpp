/*
    1. std::cout = printing the data to the console[terminal]
    2. std::cin = Reading the data from the terminal
    3. std::cerr = printing errors to the console 
    4. std::clog = printing log messages to the console 
*/
#include <iostream>

using namespace std;

int main(){
    
    cout<<"Hello World!" << endl;
    cout << "Number is : " << 12 << endl;
    int age = 21;
    cout<<"the age is : "<< age << endl;
    
    //errors
    cerr<< "cerr output : something went wrong" << endl;
    
    //log messages
    clog << "clog output : this is a log message" << endl;
    
    //Reading the data from the terminal
    
    string name;
    int age1;
    cout<<"Please type in your last name : " << endl;
    cin >> name;
    cout <<"please enter in your age : "<<endl;
    cin >>age;
    
    cout<<"Hello "<< name <<" ! you are " << age << " years old " <<endl;
    
    
}

