#include<iostream>
using namespace std;

int main (){
    int marks[4] = {45,54,23,86};
  int  mathmarks[4];
    mathmarks[0] = 219;
        mathmarks[1] = 211;
    mathmarks[2] = 678;
mathmarks[3] = 876;
cout<<"thsi si mathmarks";
cout<<mathmarks[0]<<endl;
 cout<<mathmarks[1]<<endl;
 cout<<mathmarks[2]<<endl;
cout<<mathmarks[3]<<endl;
cout<<"this is just marks";
// cout<<marks[0]<<endl;
//  cout<<marks[1]<<endl;
//  cout<<marks[2]<<endl;
// //  you can ghange the value of array
//  marks[3] = 455;
// cout<<marks[3]<<endl;
for (int i = 0; i < 4; i++)
{
    cout<<"the value of marks"<<i<<"is"<< marks[i]<<endl;
}


// while loop
// int i = 0;
// while (i<4)
// {
//     cout<<marks[i]<<endl;
//     i++;
// }

// Do While  loop
// do
// {
//     cout<<marks[i]<<endl;
//     i++;
// } while (i<4);


    return 0;
}
// Explanation
/*
on first line we write int marks 4 , so remeber 4 is optional our c++ have know that how much this is number
for output write all the index of arrays in different different output code
endl necessary after one code for confusion creation
in second line we make an array of math marks[] so this 
if we write first our array name then after array we can write  items of array in next line like in above case same as it is like we doing with variabel
we can change the value of array , but remeber that which index value change before that index print change the value of that index like in above case
in above case we cahnge the value of index 2 . process is simple write first array name then index then = then new value

Remember 
we can print all the values in one time by using loop method in above case simple make for loop or something else loop then in output command write the value of that array
in above case we simple use for loop , now we trying same process with do and while loop
*/