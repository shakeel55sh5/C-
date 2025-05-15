#include<iostream>
#include<string>
using namespace std;

int main (){
    float price = 273.54;
        // int action;
        string action;
    do
    {
     
    
    cout<<"\tWELCOME to Petrol Pump"<<endl;
    cout<<"\t\tToday Price of Petrol is: "<<price<<endl;
    cout<<"\tKindly Enter that how much liters do you require ?"<<endl;
    float petrol;
    cin>>petrol;
    cout<<"Your Petrol Price is: ";
    cout<<petrol*price<<endl;
    // cout<<"hi";
    cout<<"\tFor Again Insert Petrol Type: Yes"<<endl;
    cout<<"\tFor Exit from Petrol Pump Type: No"<<endl;
    cin>>action;
    }
    while (action=="yes" || action== "Yes");
    cout<<"\tKindly come agian"<<endl;
    cout<<"\tThank you for using our Petrol Pump"<<endl;
    return 0;
}