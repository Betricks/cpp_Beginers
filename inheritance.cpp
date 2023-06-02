//we going to start inheritance in cpp

#include <bits/stdc++.h>

using namespace std;


class Person {
    
    public:
        Person(string first_name, string last_name ,int age, double height){
            this->first_name = first_name;
            this->last_name = last_name;
            this->age = age;
            this->height = height;
        }
    private:
        string first_name;
        string last_name;
        int age;
        double height;
        
    public:
        string getFirstName(){
            return first_name;
        }
        
        string getLastName(){
            return last_name;
        }
        
        int getAge(){
            return age;
        }
        
        double getHeight(){
            return height;
        }
        
};

class Player : public Person{ 
    public:
        Player(string first_name, string last_name, int age, double height ,int player_points) : Person(first_name, last_name, age, height){
            this-> player_points = player_points;
        }
    
    private:
        int player_points;
        
    public:
        int getPlayerPiont(){
            return player_points;
        }
    
};


int main(){
    
    Player player1 = Player("ahmed", 'mohamed', 26, 1.89, 2000);
    
    cout << "Player firstName : " << player1.getFirstName() << endl;
    cout << "Player lastName : " << player1.getLastName() << endl;
    cout << "Player Age : " << player1.getAge() << endl;
    cout << "Player Height : " << player1.getHeight() << endl;
    cout << "Player Points : " << player1.getPlayerPiont() << endl;
    
    return 0;
}