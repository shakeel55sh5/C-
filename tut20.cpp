#include<iostream>
using namespace std;

int main (){
    // what is a pointer ? ---> data type which holds the address of other data types
int a=3;
int* b = &a;
// int b;
// b = &a;-->(upper and this will same)
cout<<"the address of a in b is given up"<<&a<<endl;
cout<<"the address of a in b is given up"<<b<<endl;//both will give same address

// & ---> address of operator
// the values of our variable is store in ram 
// so when our program is start then first ram copy that progrem mean run in ram , and ram give him space because it givr room and room contain address like 304,21,356 etc same address of variable



// * ----> (value at) Derefrence of operator
// if we find that what is the value of b on a mean that b per kia rakha howa ha becasue when we print b they give us the address of a so we find the value of b for this purpose we need to use derefrence operator
cout<<"the value of b is "<<*b;
// cout<<"the vale os b is "<<*a--> thsi not wrokng; 
// for this purpuose we use pointer to pointer address

// Pointer to pointer address
// if we find the address of b whose is already pointer then use this method
int** c = &b;
cout<<"the address at c of b is"<<&b<<endl;
cout<<"the address at c of b is"<<c<<endl;
// this both are for address operator of pointer to pointer

// Derefrence of pointer to pointer
cout<<"the value of c at b is "<<**c;
// this is use for finding of value of pointer address 
// remeber that when you write the value of pointer to pointer then write **c , if you write single * then it give us address of that pointer not value
// so its mean that c sotre the address of b which is own address its mean that we can store address of address
    return 0;
}
// Explanation
/*what is b
b is a pointer who store address of our A
&a shows that this is show that this is address of that variable
if we write in output just b or &b both have same meaning
if we write the vairbale with * tehn its mean that waht the value of that variabel 
*/