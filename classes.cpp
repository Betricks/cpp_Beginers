#include <iostream>
#include <string>

using namespace std;


class Cylinder {
  public:
    double base_radius = 1.0;
    double height = 1.0;
    
  
  public:
    double volume(){
        return 31.14 * base_radius * base_radius * height;
    }
    
    
};


class Car{
    private:
        string name;
        string color;
        string model;
        int year;
    public:
        Car(string param_name, string param_color, string param_model, int param_year){
            name = param_name;
            color = param_color;
            model = param_model;
            year = param_year;
        }
    public:
        string getName(){
            return name;
        }
        
        void setName(string param_name){
            name = param_name;
        }
        
        string getColor(){
            return color;
        }
        
        void setColor(string param_color){
            color = param_color;
        }
        
        string getModel(){
            return model;
        }
        
        void setModel(string param_model){
            model = param_model;
        }
        
        int getYear(){
            return year;
        }
        
        void setYear(int param_year){
            year = param_year;
        }
    
};


// int main(){
    
//     Cylinder cylinder1;
//     double volume = cylinder1.volume();
//     // cout << "Cylinder base_radius : " << cylinder1.base_radius << endl;
//     // cout << "Cylinder height : " << cylinder1.height << endl;
//     cout << "Cyllinder volume : " << volume << endl;
    
//     Car tesla("Tesla", "Blue", "x12", 2022);
    
//     string name = tesla.getName();
//     string color = tesla.getColor();
//     string model = tesla.getModel();
//     int year = tesla.getYear();
    
//     cout << "Car Name : " << name << endl;
//     cout << "Car Color : " << color << endl;
//     cout << "Car Model : " << model << endl;
//     cout << "Car Year : " << year << endl;
    
    
    
//     return 0;
// }