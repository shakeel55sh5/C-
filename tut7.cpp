#include<iostream>
using namespace std;
int main(){
    int a=4 ,b=6;
    cout<<"this is program 7 for arthimatics operator"<<endl;
    cout<<"following are the operator in C++"<<endl;
    // Arthimatics operator
    cout<<"The sum of a + b is "<<a + b<<endl;
    cout<<"The sum of a - b is "<<a - b<<endl;
    cout<<"The sum of a * b is "<<a * b<<endl;
    cout<<"The sum of a / b is "<<a / b<<endl;
    cout<<"The sum of a % b is "<<a % b<<endl;
    cout<<"The sum of a ++ is "<<a ++<<endl;
    cout<<"The sum of a -- is "<<a --<<endl;
    cout<<"The sum of ++a is "<<++a<<endl;
    cout<<"The sum of --a is "<<--a<<endl;
    cout<<endl;

    // // Assignement Operator -->used to assign values of variables
    // int a = 3, b =4;
    // char letter = 'd';

    // Comparison Operator  --> used to compare values
    cout<<"Following are the comparison operator"<<endl;
cout<<"The value of a == b "<<(a == b)<<endl;//bracket necessary otherwise give error b/c c++ confuse that what vraiabel we ask him
cout<<"The value of a != b "<<(a != b)<<endl;//not equal to
cout<<"The value of a >= b "<<(a >= b)<<endl;//greather than equal to
cout<<"The value of a <= b "<<(a <= b)<<endl;// less than equal to
cout<<"The value of a > b "<<(a > b)<<endl;// greather than
cout<<"The value of a < b "<<(a < b)<<endl;// less than

// Logical Operators
cout<<"The value of and logical operator of this ((a == b) && (a<b)) is "<<((a == b) && (a<b))<<endl;
cout<<"The value of or logical operator of this ((a == b) || (a<b)) is "<<((a == b) || (a<b))<<endl;
cout<<"The value of not logical operator of this !(a > b) is "<<!(a>b)<<endl;


    return 0;
}

// Explanation
// other operating is same +_* are same but in case of / will give us 0 the reason is that
// when we divide one integer on another integer then give us output also integer
// in above case 0.4 answer but give us just 0 b/c due to integer rule of c++
// when
// in a++ first print then inplement . it means first the value is 4 then add 1 so when it go to other code mean next code then 5 will considered the value of a
// in ++a first implement (plus) then print
// --a first declarement then print
// a-- first print then declarement (minus)

// Explanation of comparison oferator
// if a statement is true then on output give us 1 otherwise give us false 

// Explanation of logical operator

// first is and logical operator same as in js ,
//  represendtation is && .
// for and logical operator shold necessary both will true if one is false then give us on output give us false

// second is or logical operator same as in js ,
//  representation is ||
// if in or operatore having one statement is true and other false or true if one is true then give us on output true
// Remember 
// after first statement then use && or || after at the end close both statement in () b/c best practice like ((a+b)&&(a-b))

// third is not logical operator ,
// representation is !(a+b)
// it is opposite of && logical operator if something is true then it give us false b/c it is not logical operator
