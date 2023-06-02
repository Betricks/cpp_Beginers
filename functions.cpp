//Functions is block of code that do specific
#include <iostream>
using namespace std;

/*
 --Functions has return type  like [int, String, double, float, (void = 'not return or this function has nothing to return' ]
    ..it has a name 
    .. and it has prameters you passed in the function like [ firstNumber, secondNumber ]
    .. and it has abody that you've to write the logic  
*/
int addNumbers(int firstNumber, int secondNumber){
    return firstNumber + secondNumber;
}

int main(){
    
   int result = addNumbers(10, 23);
   cout<<result<<endl;
}