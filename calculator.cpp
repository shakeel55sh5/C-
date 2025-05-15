#include<iostream>
#include<cmath>
using namespace std;

int main (){
    // define variables
    string operation;
    double number1,number2;
    // get user input
    cout<<"Enter the value of number1: "<<endl;
    cin>>number1;
    cout<<"Enter Operation (+,-,*,/): "<<endl;
    cin>>operation;
    cout<<"Enter the value of number2: "<<endl;
    cin>>number2;
    // if else statement for checking entered operation
    if (operation == "+")
    {
        cout<<number1 + number2;
    }else if (operation == "-")
    {
        cout<<number1 - number2;
    }else if (operation == "*")
    {
        cout<<number1 * number2;
    }else if (operation == "/")
    {
        cout<<number1 / number2;
    }else{
        cout<<"You choice a wrong operator"<<endl;
    }
    
    

    return 0;
}