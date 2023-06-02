//if statement this is statement that do something if the condition true
//else is the opisite of if statement 

#include <iostream>

using namespace std;


int main(){
    int number1 = 70;
    int number2 = 70;
    
    if number1 is greater than number2 compiler will excute this if body 
    but  if is become false compiler not excuete the body
    if(number1 > number2){
        cout<<number1<<" is greater than "<<number2<<endl;
    }
    //if condition becomes false compiler will excute this else if body
    //but if number1 is less than number2 
    else if (number1 < number2)
    {
        cout<<number1<<" is less than "<<number2<<endl;
    }
    //this else compiler excutes if && else if becomes false 
    else{
         cout<<number1<<" is equal to "<<number2<<endl;
    }
    
    bool green = false;
    bool red = true;
    bool police_stop = false;
    
    //this is colled nusted if conditions ..
    if(green){
        if(police_stop){
            cout<< "Police Stop"<<endl;
        }
        else{
            cout<<"Go"<<endl;
        }
    }
    else if(red){
        cout<< "red Line Stop"<<endl;
    }
    
    we going to use switch statement
    const int Pen = 10;
    const int Marker = 12;
    const int Rectangle = 20;
    const int Toust = 33;
    
    int tool {Toust};
    
    switch (tool)
    {
        case Pen:{
            cout<<"Active tool is Pen" <<endl;
        }
        break;
        case Marker:{
            cout<<"Active tool is Marker" <<endl;
        }
        break;
        case Rectangle:{
            cout<<"Active tool is Rectangle" <<endl;
        }
        break;
        case Toust:{
            cout<<"Active tool is Toust" <<endl;
        }
        break;
    
    default:{
        cout<<"Active tool is Eraser" <<endl;
    }
        break;
    }
    
    //ternary Conditional = 'Single Line if and else'
    int age = 18;
     age >= 18 ? cout << "You are Mature "<<endl : cout << "You are Not Mature "<<endl;
    return 0;
}