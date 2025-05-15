// ***Built in Data Types
#include<iostream>
using namespace std;
 
 int c = 45;
 int main(){
    int a,b,c;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    c = a + b;
    cout<<"The sum of a+b is "<<c<<endl;
    // cout<<"The global value of c is "<<c;
    cout<<"The global value of c is "<<::c;
    return 0;
 }
 
//  Explanation
// first is simple taking a and b value from coustmer 
// then you see we make the value of c own , what is the value of c , so c is equal to a + b , and then in output simple print just c

// let suppose we have one more c which is in global varibael and we want print that variabel in main funciton so this method use 
// if we write another c in output like in above comment part then give us the local variabel which is present in that fucniton but we need global variabel 
// so we use scope resolution operator
// this operator use to print global vaiarbl in main funciton or local variabel , symbol ::
// Working
// simple write output command then write scope resolution means :: then variabel name so we take in output global variabel like in above case
// when we :: then it means that we ask c++ to print global value 


// Remeber 
/*float d = 34.4;
long double e = 34.4;
cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e;
in this case we take output of same d = 34.4 and e = 34.4 no problem
// but when we pass it in funciton then we ask from it that 34.4 is what then he ask that this is double . if we identify that this is double and this is float then use this method
float d = 34.4f --> f identify that this is double 
long double e = 34.4l --> l identify that this is long double
Remeber one thing 
On output take jsut number i mean output will same as compare to above statement mean on output not showing 34.4f , just show 34.4 and as well as with long double */