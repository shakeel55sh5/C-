// #include<iostream>
// using namespace std;
// int main(){
//     // cout<<"hellow world";
//     int i=1;
//     while(i<=5){
//         int j=1;
//         while(j<=i){
//         cout<<"*";
//         j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main (){
//     int i = 5;
// while(i>=0){
//     int j=1;
//     while(j<=i){

//     cout<<"*";
//     j++;
//     }
//     cout<<endl;
//     --i;
// }
// // cout<<--i;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main (){
//     cout<<"Enter the rows of triangle"<<endl;
//     int i;
//     cin>>i;
// while(i>=0){
//     int j=1;
//     while(j<=i){

//     cout<<"*";
//     j++;
//     }
//     cout<<endl;
//     --i;
// }
// // cout<<--i;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    // cout<<"hellow world";
    cout<<"Enter the rows of triangle"<<endl;
    int i =1;
    int rows;
    cin>>rows;
    while(i<=rows){
        int j=1;
        while(j<=i){
        cout<<"*";
        j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}