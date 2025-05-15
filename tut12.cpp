// setw function manipulator
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a = 4, b = 54, c = 1233;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;

    cout<<"The value of a is "<<setw(4)<<a<<endl;
    cout<<"The value of b is "<<setw(4)<<b<<endl;
    cout<<"The value of c is "<<setw(4)<<c<<endl;

    // Operator precendence
    int x = 4, y= 5;
    // int c = (a*5)+5
    int z = ((((x*5)+y)-z)+8);
    cout<<"the value of c is "<<z;
    return 0;
}

// Explanation
// manipulator is different types 
// one is endl 
// and the other is setw
// Working
// first make a new header file with name of #include<manip> which accept your manipulation
// then it use for aking spacing between output 
// when we write output command then before output variabel name write setw() inside () write a number that how much we need space likke in above case we write 4



// Explanation
// in above precendence operator wee take the value of c according to bodmas
// it give us sometime reight value but mostly give false answer b/c precendence property
// we see refrence c++ website on whihc show it that c++ first solve * then / then + and -
// on above we use () for first solve then for next () and as it is according to associative property
// According to refrence associativity property the + and - will solve from left to right 
// this is use compile program