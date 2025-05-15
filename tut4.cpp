#include<iostream>
using namespace std;

int glo = 4;
void sum(){
    // int glo = 78;
    int a;
    cout<<glo;
}

int main(){
    int glo = 6;
    glo = 9;
    sum();
    cout<<glo;
    return 0;
}
// first make a entry function . in above both are function but main is entry function 
// it means that if we make a new funciton then call that function so call from the entry funciton mean inside main we call that function like in above case
// remaber one thing when we write return in main function then nothing necessary to write in another function or place that return otherwise give error

// Explanation
// in above case we write first int data type in main which is our local variabel , then write same variabel in outside function 
// in this case if we print the variabel then the output will the local variabel mean that variabel which is priesent in main which is local
// if we cahange that variabel like in above comment section then the local variable will change mean main variabel will cahnge

// after this we write one more function in which contain same variabel name and inside that second funciton we write output command for that variabel 
// we see taht it nothing give output the reason is that , we should call first from main funcition 
// after calling we see taht the second funciton will give us the variable output which is present inside that funciton mean inside of second fucniton which is local for their own 
// if we write another variabel name and remove that variabel which is present in outside or global then in this case if we print that varaiable tehn give us global variabel mean outside variabel print 

// Remember
// Explanation && Process
// first c++ come to main function and see that there is we write some variable and skip this then see taht we call a funciton 
// so c++ go first to function , and after going function see that we print a variabel , in this case that funciton find inside the local variabel if not find in local variable then c++ find in global variabel
// after finding that variabe it print and our c++ come again to main funciton and see that 
// we print a variabel and he see first in there own local area that Is there is present that variabel in that local area if present then print otherwise it find in outside or global area

// Remeber one thing we can create two variabel with same name but c++ take that variable which is local