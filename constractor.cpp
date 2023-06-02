#include <bits/stdc++.h>

using namespace std;

class Person{
    
    public:
        Person(string name_pram, int age_pram, double height_pram, double weight_pram){
            name = name_pram;
            age = age_pram;
            height = height_pram;
            weight = weight_pram;
        }
    
    
    private:
        string name;
        int age;
        double height;
        double weight;
    
    
    public:
        string get_name(){
            return  name;
        }
        
        void set_name(string name_pram){
            name = name_pram;
        }
        
        int get_age(){
            return  age;
        }
        
        void set_age(int age_pram){
            age = age_pram;
        }
        double get_height(){
            return  height;
        }
        
        void set_height(double height_pram){
            height = height_pram;
        }
        double get_weight(){
            return  weight;
        }
        
        void set_weight(double weight_pram){
            weight = weight_pram;
        }
    
};


int main(){
    
    Person person1 = Person("Ahmed", 22, 1.83, 60);
    
    cout << "Person Name : " << person1.get_name() << endl;
    cout << "Person Age : " << person1.get_age() << endl;
    cout << "Person height : " << person1.get_height() << endl;
    cout << "Person weight : " << person1.get_weight() << endl;
    
    return 0;
}