#include<iostream>
using namespace std;
// Function Prototype
// type function-name (arguments);
// int sum(int a,int b);//--Acceptable
// int sum(int a, b);//-->not Aceeptable
int sum(int ,int);//--> Acceptable

// void g( void );//--> Acceptable
void g();//--> Acceptable
int main (){
       int num1;
    int num2;
    cout<<"Enter the value of num1 "<<endl;
    cin>>num1;
    cout<<"Enter the value of num2 "<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"The sum of a + b is "<<sum(num1,num2);
    g();
    return 0;
}
int sum(int a,int b){
    // Formal patramters a and b will be taking values from actual paramteres num1 and num2
    int c;
    c = a+b;
    return c;
}
void g(){
    cout<<"\n Hellow ,Good Morning";
}
/*
Function Prototype:-
if we put second function mean sum function after the main function then give error because he say that we not declared in this scope 
so for this purpose we used prototype funciton
funcition prototype ask to c++ in advanced that the sum name function is come after some time so be ready 
*/
// Explanation & Process
/*
first c++ go to main funciton then check taht where is sum then go outside and see that there is not sum so 
we call it on first that there is present sum plz check anywhere , anyplace is present sum function. prototype take assureity that sum is present somewhere kindly you find it, prototype not take gurantee
on first , the first and third prototype is acceptable while second is not acceptable
third is acceptable because this is not our actual arguments , its a just empty variabel therefore it acceptable
second is not acceptable because in case of prototype we should write data with name both mena if we write one with name and other wrthout name then it not acceptable
*/

// Formal Paramteres :-
// formal parameters are that parameteres which we make in funcion , in above case a and b is formal parameters
// Actual parameeres:-
// Actual parameters are that parametres are that values which pass to funciton in above case num1 and num2 is actual paramters

// if we need to make a funciton that just called then use void function , void function is used for just called them and he print void
// void is nothing big thing its jsut simple funciton and empty function just call him
// process is simple write void then name of function and (){} , after this in main funciotn called void funciton then give error because in outside first prototype use of void funciotn
