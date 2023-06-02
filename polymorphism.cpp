#include <bits/stdc++.h>

using namespace std;


class Shape{
    public:
        void draw(){
            cout << "Drawing Shape..." << endl;
        }
};


class Rectangle : public Shape{
    public:
        void draw(){
            cout << "Drawing Rectangle [] " << endl;
        }
    
};


class Triangle : public Shape{
    public:
        void draw(){
            cout << "Drawing Triangle /_| " << endl;
        }
};


int main(){
    
    Shape shape1 = Shape();
    Rectangle rectangle1 = Rectangle();
    Triangle triangle1 = Triangle();
    
    shape1.draw();
    rectangle1.draw();
    triangle1.draw();
    
    return 0;
}