#include<iostream>
using namespace std;

int main(){
    /* Loops in C++ 
    There are three types of loop in c++
     1: For loop
     2: while loop
     3: do-while loop*/

    /*1: For loop in C++*/
    for(int i = 0; i <6;){
        cout<<i<<endl;
        i++;
    }
    // syntax for loop
    /*for(initializion; condition; updation)
    {
        loop body(C++ code);
    }*/
// //    Expmple of infinte For loop
// for(int i = 0; 34 < 40; i++){
//     cout<<i<<endl;
// }--> in this case condition is never become false so our process will continuity and take larger memory so avoid these programs
    return 0;
}
// Explanation
/*in syntax of for loop initializaion int i=0 is work for it run this code for just one time and then never run this code for next time 
then it check condition i<6 is this is true , yes this is true then it go to body and execute loop body mean cout and endl
thne it move to updation  execute , during executrion process it give i value 1 then going back to initilization and process take place
again same procees occur and whenever condition become nothing false it process will contiuning, when condition will false then it out from loop
*/
// Remember 
// don,t write updation 2 time then it give us the update of i 2 time mean if i =0 then after first updation it give us i=2 then i=4 so on
// loop depend upon 3 process initiolazion , conditon, updation