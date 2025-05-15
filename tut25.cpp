#include<iostream>
using namespace std;
// unions
// unions is same like structure but provide us a better memory management
union money
{
    int rice;
    char car;
    float pounds;
};

int main (){
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    // cout<<m1.rice;
    cout<<m1.car;


    enum Meal{ breakfast,lunch,dinner,samosa};
    Meal b1 = lunch;
    cout<<b1;
    cout<<lunch;
    cout<<samosa;

    return 0;
}
// union will give us sam eoutput like in case of structure but in case of union we use one output at a time due to memory management 
// like in above case if we print both rice and car at a time then give us garbage value output 
// Remember one more thing that if we decalsre the second dataa then we should to ouptut write second data otherwise give garbage value output
// like in abvoe case now we just output write car value becasue we decalre the second value mean car value so we should to output car value otherwise give us garbage value

// Explaantion of enum
/*
enum is basically a new data type make for us if we write enum then name of enum then start {} and inside this write some names of fruites, or else
then print that first name then give us 0 and second name give us 1 and as it is like index value give us so we can say that it works like new data type
so we can declare that item of enum with new nmae like in above case we declare with b1 with lunch and in output write b1 and take output
Remeber that during enum after write enum name then nothing use = , write items without = 
*/