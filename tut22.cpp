#include<iostream>
using namespace std;

int main (){
    int marks[4];
    marks[0] = 23;
    marks[1] = 273;
    marks[2] = 239;
    int* p = marks;
    cout<<"the alue of *p is "<<*p<<endl;
    cout<<"the alue of (p+1) is "<<*(p+1)<<endl;
    cout<<"the alue of (p+2) is "<<*(p+2)<<endl;



    int mathmarks[4];
    mathmarks[0] = 6;
    mathmarks[1] = 3;
    mathmarks[2] = 9;
    int* m = mathmarks;
    cout<<*(m++)<<endl;
    cout<<*(++m)<<endl;
    cout<<*(m++)<<endl;
    return 0;
}
// Explanation
/*
First we make an empty array then after this we declare that array with there index and value 
then in last we make an pointer with the value of that array name of pointer any like in above case we write name of pointer is p and m and the value of pointer is the name of array
then on output we simple write the name of pointer and before pointer name write * which declaare that this si pinter 
then for next index just implement of that pointer like in above case just *(p+1) or *(p+2) and so on
Second method
in second method we simple write other code same but in output code write changes
on output write pointer name then before pinter name * is necessary for all pointer codes
then write the name of pointer then implement like in above case *(m++)
after above code execute the value of m will change from beginner to next value then write same code as well as 
if we want to print direct last index of that array then write first implement then write name of array like *(++m) in this case first implement then print that indedx of array
*/