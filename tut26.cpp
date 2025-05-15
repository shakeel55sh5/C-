#include<iostream>
using namespace std;
int sum(int a,int b){
    int c;
    c = a+b;
    return c;
}
int main (){
    int num1;
    int num2;
    cout<<"Enter the value of num1 "<<endl;
    cin>>num1;
    cout<<"Enter the value of num2 "<<endl;
    cin>>num2;
    cout<<"The sum of a + b is "<<sum(num1,num2);
    return 0;
}
// Explanation
/*
first make a function outside of main function then create some variabel and output same as main function
on second function remember that both variabel declare with there data type
process
first in main it print num1 and num2 then go to sum because we call sum funciton then 
convert num1 to a then num2 convert to b 
then it return that values to main function it means that come to output in case of main return 0 and in case of sum return c
therefore we take output and after output our code stop because in main function we write return 0 which mean that code become stop  
*/

/*
if we put second function mean sum function after the main function then give error because he say that we not declared in this scope 
so for this purpose we used prototype funciton
funcition prototype ask to c++ in advanced that the sum name function is come after some time so be ready 
*/