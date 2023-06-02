// auto this dataType it can help you when you don't know the variable dataType

#include <iostream>

using namespace std;

int main(){
    auto var1 = 12;
    auto var2 = 13.0;
    auto var3 = 18.0f;
    auto var4 = 15.0l;
    auto var5 = 'T';
    
    cout << "var1 : " << var1 << endl;
    cout << "var2 : " << var2 << endl;
    cout << "var3 : " << var3 << endl;
    cout << "var4 : " << var4 << endl;
    cout << "var5 : " << var5 << endl;
    
    return 0;
}