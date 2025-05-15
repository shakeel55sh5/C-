#include<iostream>
using namespace std;

int main (){
    double num1,num2;
    char op;
    cout<<"Enter the operator (+ - * /): ";
    cin>>op;
    cout<<"Enter two values one by one: ";
    cin>>num1>>num2;
    switch (op)
    {
        case '+':
        cout<<num1<<op<<num2<<" = "<<num1+num2<<endl;
        break;
        case '-'://--> remeber that which symbol was use you in case or in "" or '' then user should write that symbol in output , 
        cout<<num1<<op<<num2<<" = "<<num1-num2<<endl;// it means that if you write _ and in output command write - , then user should write in output _ after this it give - operation 
        // it means that input symbol c++ take and compare with inside '' if both are same then go to output command. and in above char is just store that operator
        break;
        case '*':
        cout<<num1<<op<<num2<<" = "<<num1*num2<<endl;
        break;
        case '/':
        if(num2 == 0.0){
            cout<<"Divide by Zero Situation"<<endl;
        }else{
            cout<<num1<<op<<num2<<" = "<<num1/num2<<endl;
        }
        break;
        default:
        cout<<"Invalid Operator"<<endl;
    }
    return 0;
}