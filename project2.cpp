#include<iostream>
#include<string>
using namespace std;
// int loop(int num1){
//     return num1;
// }
int main (){
    string action;
    cout<<"\t WELCOME TO GAME"<<endl;
cout<<"\tWe have a one lucky number.\n \tYou should to guess that Number"<<endl;
    do
{
    cout<<"Kindly Enter Number b/w 1-10"<<endl;
    int num1,target = 8;
    cin>>num1;
    if (num1 > 16)
    {
        cout<<"you are very far from lucky number"<<endl;
    }
    else if (num1>target)
    {
        cout<<"you are near to lucky number \n \t kindly try again"<<endl;
    
    
    }
    else if (num1 < 5)
        {
            cout<<"you choose very low number"<<endl;
        }
    else if (num1<target)
    {
        cout<<"you are very close to lucky number \n \t kindly try again"<<endl;
        
        
    }else{
        cout<<"Congratulation you find lucky number"<<endl;
    }
    cout<<"\t For Continue game Type: Yes"<<endl;
    cout<<"\t Exit from game Type: No"<<endl;
    cin>>action;
    /* code */
} while (action=="yes"|| action=="Yes");{
    cout<<"you exit from game"<<endl;
};
    return 0;
}