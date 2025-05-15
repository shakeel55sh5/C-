// constant in c++
#include<iostream>
using namespace std;

int main(){
    //this is variable which can be change 
    int a = 3;
    cout<<"the value od a was "<<a;
    a = 54;
    cout<<"the value of a is "<<a;
// Now we make constant
    const int b = 34;
    cout<<"the value of b is "<<b;
    // b = 78; --> now give error because constant is constant and it never change it give error 
    // same as it is we make with float 

    const float c = 3.14;
    cout<<"the value of c is "<<c;
    return 0;
}