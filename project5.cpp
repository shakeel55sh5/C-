#include<iostream>
using namespace std;

int main (){
    // int cardID[3];
    int cardID,cardPin,balance;
   cout<<"\tWelcome to ATM Machine"<<endl;
   cout<<"\tKindly Insert your ATM Card Number"<<endl;
//    cin>>cardID[];
cin>>cardID;
// for(int i = 0; i <= cardID[3]; i++){
//     cin>>cardID[i];

// for (int i = 0; i < cardID[3]; i++)
// {
//     cout<<cardID[i]<<endl;
// }}
cout<<"\tEnter your 4 Digit Pin Code"<<endl;
cin>>cardPin;
    cout<<"\t Enter your Balance:"<<endl;
    cin>>balance;
    cout<<"\tWithdrawal Money\n\tInsert Money\n\tChange your Pin Code\n\tTaking Loan\n\tExit";
    return 0;
}