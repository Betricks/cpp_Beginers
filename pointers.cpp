//Pointers is special kind that is used to store the address of other variable 

#include <iostream>

using namespace std;

int main(){
    //Declaring Pointer variable we * in after dataTpes and also use & in before variable
    int age = 43;
    double money = 99.0;
    int* age_pionter = &age;
    double* money_pionter = &money;
    cout<<"Address of age : " << *age_pionter << endl;
    cout<<"Size Of age : "<<sizeof(age_pionter)<<endl;
    cout<<"Address of Money : " << *money_pionter << endl;
    cout<<"Size Of Money : "<<sizeof(money_pionter)<<endl;
    
    char* p_message {"Hello World!"};
    cout<< "Value Stored at P_Message : "<<*p_message<<endl;
        
    return 0;
}