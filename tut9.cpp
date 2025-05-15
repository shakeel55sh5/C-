// ***Float , Double and Long double Literals****
#include<iostream>
using namespace std;
int main(){
    float d = 34.4;
long double e = 34.4;
cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e;
    return 0;
}

// Explanaation
/*in this case we take output of same d = 34.4 and e = 34.4 no problem
// but when we pass it in funciton then we ask from it that 34.4 is what then he ask that this is double . if we identify that this is double and this is float then use this method
float d = 34.4f --> f identify that this is double 
long double e = 34.4l --> l identify that this is long double
Remeber one thing 
On output take jsut number i mean output will same as compare to above statement mean on output not showing 34.4f , just show 34.4 and as well as with long double */

// Second mathod
// we can use size of operator which is keyword of c++
// simple in output we write keyword sizeof() inside () write the value of which we want to check like in above case we check the value of 34.4,34.4f,34.4F,34.4l and 34.4L
// so we see that we obtain different result 
// the first result mean simple write the value which does not contain any specialization then we see that it give us double value which is 8
// the second and third value is float , Remember that capital or small letter not issue both f or F represent float
// fourth and fifth are long double 

// Note
// In simple or complex program of c++ we use size of operator or find that what type of number is this

