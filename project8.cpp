#include<iostream>
using namespace std;

char arr[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void display(){
cout<<"\t\t T I C K C R O S S G A M E"<<endl;
    cout<<"\tPlayer1 [X]"<<endl;
    cout<<"\tPlayer2 [O]"<<endl;
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<arr[0][0]<<"  |  "<<arr[0][1]<<"  |  "<<arr[0][2]<<"  \n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<arr[1][0]<<"  |  "<<arr[1][1]<<"  |  "<<arr[1][2]<<"  \n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<arr[2][0]<<"  |  "<<arr[2][1]<<"  |  "<<arr[2][2]<<"  \n";
    cout<<"\t\t     |     |     \n";
    cout<<"\tPlayer1 [X] ";
}
void turn(){
    int choice;
    char player = 'X';
    cin>>choice;
    switch (choice)
    {
    case 1: arr[0][0] = 'X';break;
    case 2: arr[0][1] = 'X';break;
    case 3: arr[0][2] = 'X';break;
    case 4: arr[1][0] = 'X';break;
    case 5: arr[1][1] = 'X';break;
    case 6: arr[1][2] = 'X';break;
    case 7: arr[2][0] = 'X';break;
    case 8: arr[2][1] = 'X';break;
    case 9: arr[2][2] = 'X';break;
    default:
    cout<<"invlaid choice";
        break;
    }
}


int main (){
    while(true){

        display();
        turn();
        display();
    }
    return 0;
}