#include<iostream>
using namespace std;

    char arr[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char player = 'X';
int row,column;
bool draw = false;
void display(){
    system("clear");
    cout<<"     |     |     "<<endl;
    cout<<"   "<<arr[0][0]<<" |  "<<arr[0][1]<<"  |  "<<arr[0][2]<<"  "<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"_________________"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"   "<<arr[1][0]<<" |   "<<arr[1][1]<<" |   "<<arr[1][2]<<" "<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"_________________"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"   "<<arr[2][0]<<" |  "<<arr[2][1]<<"  |  "<<arr[2][2]<<"  "<<endl;
    cout<<"     |     |     "<<endl;
}
void player_turn(){
    int choice;
    
    
    if(player == 'X'){
        cout<<"Player1 turn";
    }else{
        cout<<"player2 turn";
    }
    cin>>choice;
    switch (choice)
    {
        case 1: row = 0; column = 0;break;
        case 2: row = 0; column = 1;break;
        case 3: row = 0; column = 2;break;
        case 4: row = 1; column = 0;break;
        case 5: row = 1; column = 1;break;
        case 6: row = 1; column = 2;break;
        case 7: row = 2; column = 0;break;
        case 8: row = 2; column = 1;break;
        case 9: row = 2; column = 2;break;

    
    default:
    cout<<"Invalid Selection";
        break;
    }
    if(player == 'X' && arr[row][column] != 'X' && arr[row][column] != 'O'){
        arr[row][column] = 'X';
        player = 'O';
    }else if(player == 'O' && arr[row][column] != 'X' && arr[row][column] != 'O'){
        arr[row][column] = 'O';
        player = 'X';
    }else{
        cout<<"Box already fill kindly choose another box\n";
        player_turn();
    }
}
bool gameover(){
    for(int i=0;i<3;i++){
        if(arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] || arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i]){
            return false;
        } 
    }
    if(arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] || arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0] ){
        return false;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] != 'X' && arr[i][j] != 'O'){
                return true;
            }
        }
    }
    draw = true;
    return false;
}
int main (){
    while(gameover()){
    display();
    player_turn();
    display();
}
if(player == 'X' && draw == false){
    cout<<"Player2 win";
}else if(player == 'O' && draw == false){
    cout<<"Player1 win";
}else{
    cout<<"Game draw";
}
    
    return 0;
}