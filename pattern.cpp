// Inert Triangle
/*#include<iostream>
using namespace std;

int main (){
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/


// Triangular pattern
// #include<iostream>
// using namespace std;

// int main (){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// Hollow rectangular pattern
// #include<iostream>
// using namespace std;

// int main (){
//     int n,m;
//     cin>>n>>m;
//     // n=4, m=5;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j=m; j++){
//             if(i==1 || j==1 || i==n || j==m){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Rectangular Pattern
// #include<iostream>
// using namespace std;

// int main (){
//     int n,m;//n is rows and m is columns
//     cin>>n>>m;
//     for(int i=1; i<=n; i++){// this is for our rows . first check the condition if true then go to column condition
//         for(int j=1; j<=m; j++){//this is column condition if it true then print * then increases the value of j and check condition if true then again print *
//             cout<<"*";// whenever our j condition become false then go outside of j loop and print endl then go again to i loop and increases i
//         }// then again come to j . whenever the condition of i loop become false then our program will stopped
//         cout<<endl;
//     }
//     return 0;
// }
 