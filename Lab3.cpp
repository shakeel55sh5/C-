#include<iostream>
using namespace std;
// Outer Function 
int find_Maximum(int m,int n){
// For return write relational operator
    return (m >= n) ? m : n;
}
int main (){
  int m,n;
 cout <<"Enter the value of m: "<<endl;
 cin >> m;
 cout <<"Enter the value of n: "<<endl;
 cin >> n;
 // In output we write our function name for taking output
 cout << "The maximum value is: " << find_Maximum(m, n) << endl;
 cout<<"hello";
    return 0;
}

    /*int num;
    cout<<"Enter the number of which you want to take table "<<endl;
    cin>>num;

    cout<<num<<" x 1 = "<<num*1<<endl;
    cout<<num<<" x 2 = "<<num*2<<endl;
    cout<<num<<" x 3 = "<<num*3<<endl;
    cout<<num<<" x 4 = "<<num*4<<endl;
    cout<<num<<" x 5 = "<<num*5<<endl;
    cout<<num<<" x 6 = "<<num*6<<endl;
    cout<<num<<" x 7 = "<<num*7<<endl;
    cout<<num<<" x 8 = "<<num*8<<endl;
    cout<<num<<" x 9 = "<<num*9<<endl;
    cout<<num<<" x 10 = "<<num*10<<endl;*/

    // int a;
    // cin>>a;
    // cout<<a%1<<endl;
    

     /*int year;
    cout<<"Enter year that you want to check that this is leap year or Not"<<endl;
    cin>>year;
    // first check our && operator if both are true then check 
    // || operator if true then leap year 
    // if in between of && operator become false then on output else statement
    if (year%4==0 && (year%10 != 0)  || year % 40 == 0)
    {
        cout<<year<<" is a leap year"<<endl;
    }else{
        cout<<year<<" is not a leap year"<<endl;
    }*/

   /*int num1,num2;
    cout<<"Enter the value of number1"<<endl;
    cin>>num1;
    cout<<"Enter the value of number2"<<endl;
    cin>>num2;
// Now write condition and statement for output 
    if (num1 > num2)
    {
        cout<<num1<<"  is the largest number as compare to "<<num2<<endl;
    }else if(num1 < num2){
        cout<<num2<<"  is the largest number as compare to "<<num1<<endl;
    }else{
        cout<<"Both numbers are same and Equal"<<endl;
    }*/


   /* int num1,num2;
    cout<<"Enter the value of number1"<<endl;
    cin>>num1;
    cout<<"Enter the value of number2"<<endl;
    cin>>num2;
// Now we use Relational operator
    cout<<"The largest number between num1 and num2 is "<<endl;
    cout<<(num1 >= num2 ? num1 : num2)<<endl;
    */