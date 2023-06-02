//this brings in the iostream library
#include <iostream>
#include "classes.cpp"

using namespace std;

//the main function is colled the entry point of the c++ program
//and the 
int main(){
    //this will print *Hello world* in the console(terminal)
    std::cout <<"Hello World";
    Car toyoto = new Car("Toyoto", "Red", "X23", 2022);
    cout << "Car Name : " << toyoto.getName << endl;   
    cout << "Car Color : " << toyoto.getColor << endl;  
    cout << "Car Model : " << toyoto.getModel << endl;  
    cout << "Car Year : " << toyoto.getYear << endl;  
    //this function will return 0 and exit the program
    return 0;
}


/*

this is block comment that are used to write comment  in multiple comment
what is comment?
comment is used to explain the code that you've write overtime 
to understand easily

*/
