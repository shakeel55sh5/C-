#include<iostream>
using namespace std;

int main (){
    int num1,num2;
    // int last;
    int action;
    cout<<"\tWelcome to Mobile lock Application"<<endl;
    
   do
   {
    cout<<"Enter Pin"<<endl;
     cin>>num1;
     cout<<"Confirm your Pin"<<endl;
     cin>>num2;
    if (num1==num2)
    {
        cout<<"your pin created";
    }else{
        cout<<"your pin doesn't Match"<<endl;
        cout<<"Kindly true pin enter"<<endl;
    }
    cout<<"Do you want to change your pin"<<endl;
    cout<<"for Change pin type: 2"<<endl;
    cout<<"For save pin type: 1"<<endl;
    cin>>action;
    int last;
   } while (action == 2);
//    {
    // cout<<"Enter your last pin"<<endl;
    // int last;
    // cin>>last;
//    };
   
    cout<<"again";
    return 0;
}