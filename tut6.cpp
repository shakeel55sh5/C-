#include<iostream>
using namespace std;
#include "this.h"
int main(){
    cout<<"this is our 6 file"<<endl;//endl and \n both are same working both use for line breaking
    return 0;
}
// There are two types of header files 
// 1 is system header files :
// it comes with compiler like in above iostream is include in system directory
// 2 user defind header files:
// it is written by the programmer like in above we make this.h header files

// Remeber that 
// if we make a header file and if it is not present in our current directory then give error
// like in above case we make a file in our current directory then it give us output 
// Remember one more thing and that is after making header files no use ; at the end other wise give error
// after making user header firle and then rename that files then also give error
// for making header files then search on google cpp reference header and open en.cpp webesite in which show update and header files of c++
// endl and \n both are use for line breaking