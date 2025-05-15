//**** */ Reference Varaibales***
// Example
// Shakeel --> Shakeela --> kokan --> ustad
// person is same but different name 
// so if we want to make a variabel and make him 3 or 4 name of that variabel mean value wil same just name expell then use refrence variabel
#include<iostream>
using namespace std;
int main(){
    float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}
// Explanation 
// first make a variabel with some value then make a new variabel with different name and link with that for this purpose use & (ampersent) then new name and equal to that variabel
// like in above case now y and x both have same value . its nothing mean that it become copy no it is just one vafiabrl but different name
// Remember that the original value will be first variabel in above case original variabale is x


// ***Type Casting***
/*int a = 45;
cout<<"the value of a is "<<a; --> it will give us 45 
cout<<"the value of a is "<<(float)a; --> it will give us also 45 but now this is convert to float 

float b = 43.2;
cout<<"the value of b is "<<b; --> it give us 43.2
cout<<"the value of b is "<<(int)b; --> now it give us just 43 b/c now thsi si convert to integer*/
// Remember one thing in a+b , a + (int)b , both cases give different ans due to story of harry