#include<iostream>
#include<stdlib.h>
using namespace std;
    char arr[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char row,column;
int display_board(){
    system("clear");
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
    return 0;
}

void display_turn(){
        int player1,player2,choice;
        // char row,column;
        cin>>choice;
        char player = 'X';

    if (player == 'X')
    {
    cout<<"\tPlayer1 [X]"<<endl;
    }
    if (player == 'O')
    {
    cout<<"\tPlayer2 [O]"<<endl;
    }
    
    switch (choice)
    {
    case 1:
        arr[0][0] = 'X';
        break;
        case 2:
        arr[0][1] = 'X';
        break;
        case 3:
        arr[0][2] = 'X';
        break;
    default:
    cout<<"invalid choice";
        break;
    }
    if (player == 'X')
    {
        arr[row][column] = 'X';
        player == 'O';
    }else if (player == 'O')
    {
        arr[row][column] = 'O';
        player == 'X';
    }
    
    
}

int main (){
    while(true){
    display_board();
    // cout<<arr[1][2];
    // for(int i=0; i<3; i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }

    // cout<<"\t\t T I C K C R O S S G A M E"<<endl;
    // cout<<"\tPlayer1 [X]"<<endl;
    // cout<<"\tPlayer2 [O]"<<endl;
    // cout<<"\t\t     |     |     \n";
    // cout<<"\t\t  "<<arr[0][0]<<"  |  "<<arr[0][1]<<"  |  "<<arr[0][2]<<"  \n";
    // cout<<"\t\t     |     |     \n";
    // cout<<"\t\t_____|_____|_____\n";
    // cout<<"\t\t     |     |     \n";
    // cout<<"\t\t  "<<arr[1][0]<<"  |  "<<arr[1][1]<<"  |  "<<arr[1][2]<<"  \n";
    // cout<<"\t\t     |     |     \n";
    // cout<<"\t\t_____|_____|_____\n";
    // cout<<"\t\t     |     |     \n";
    // cout<<"\t\t  "<<arr[2][0]<<"  |  "<<arr[2][1]<<"  |  "<<arr[2][2]<<"  \n";
    // cout<<"\t\t     |     |     \n";
    cout<<"Player1 turn: [X]";
    // cout<<"Player2 turn: [O]"<<endl;



    // cin>>player1;
        // cin>>choice;
    display_turn();
    display_board();
    }
    // cout<<"\t\t     |     |     \n";
    // cout<<"\t\t  "<<arr[0][0]<<"  |  "<<arr[0][1]<<"  |  "<<arr[0][2]<<"  \n";
    // cout<<"\t\t     |     |     \n";
    // cout<<"\t\t_____|_____|_____\n";
    // cout<<"\t\t     |     |     \n";
    // cout<<"\t\t  "<<arr[1][0]<<"  |  "<<arr[1][1]<<"  |  "<<arr[1][2]<<"  \n";
    // cout<<"\t\t     |     |     \n";
    // cout<<"\t\t_____|_____|_____\n";
    // cout<<"\t\t     |     |     \n";
    // cout<<"\t\t  "<<arr[2][0]<<"  |  "<<arr[2][1]<<"  |  "<<arr[2][2]<<"  \n";
    // cout<<"\t\t     |     |     \n";
    return 0;
}