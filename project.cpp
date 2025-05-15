#include<iostream>
using namespace std;
float add (float a, float b){
    return a+b;
}
float subtract (float a, float b){
    return a-b;
}
float multiplly (float a, float b){
    return a*b;
}
float divide (float a, float b){
    return a/b;
}
int main (){
    cout<<"\t Welcome to Our Project:"<<endl;
    int action;
    do{
        float a;
        cout<<"Write a number for calculation..."<<endl;
        cin>>a;
        float b;
        cout<<"Write a second number for calculation..."<<endl;
        cin>>b;

        int choice;
        cout<<"Select the method of calculation"<<endl;
        cout<<"Select 1 for addition"<<endl;
        cout<<"Select 2 for subtraction"<<endl;
        cout<<"Select 3 for multiplication"<<endl;
        cout<<"Select 4 for division"<<endl;

        cin>>choice;
        cout<<"your answer is: ";
        if(choice==1){
            cout<<add(a,b);
        }
        else if(choice == 2){
            cout<<subtract(a,b);
        }else if(choice ==3){
            cout<<multiplly(a,b);
        }else if (choice == 4)
        {
            cout<<divide(a,b);
        }else if(choice != 1 || choice != 2 || choice != 3 || choice != 4){
            cout<<"\n \tyou choose wrong option"<<endl;
            cout<<"\tyou should to choose above number"<<endl;
        }
        cout<<"\n Kindly choose numbers"<<endl;
        cout<<"\t For Exit Type 1"<<endl;
        cout<<"\t For Continue Type 2"<<endl;
        cin>>action;
        

    }while (action ==2);
    {
cout<<"You Exit From Calculator"<<endl;    }
    
    return 0;
}
// #include<iostream>
// using namespace std;

// int main (){
//     do
//     {
//         /* code */
//     } while (/* condition */);
    
//     return 0;
// }