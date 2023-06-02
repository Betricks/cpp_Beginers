//now we going to learn struct and class and also the difference they had.
//struct keywoard is used to create class but is different than class keyword
//struct keyword had public data members
// while class keyword had private data members

#include <bits/stdc++.h>

using namespace std;


class Dog{
    string name;
};

struct Cat{
    string name;
};

int main(){
    // Dog dog1;
    // dog1.name = "Doggy";
    
    Cat cat1;
    cat1.name = "kitty";
    
    cout << cat1.name << endl;
    // cout << dog1.name << endl;
    return 0;
}