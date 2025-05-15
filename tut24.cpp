#include<iostream>
using namespace std;
// structure 
// structure is a user data type in which contain different data type while in array contain just one data type
typedef struct teacher
{
    int tId;
    char favChar;
    float Tsalary;
} te;

int main (){
    struct teacher shakeel;
    //  te shakeel;--> this line and above line same output 
    struct teacher faisal;
    struct teacher sohail;
    shakeel.tId = 2;
    shakeel.favChar = 'S';
    shakeel.Tsalary = 560000000;
    cout<<"The value is "<<shakeel.Tsalary<<endl;//--> it give us in decimal like 5.6*10^8 so C++ automatically understand on float values 
    cout<<"The value is "<<shakeel.favChar<<endl;
    cout<<"The value is "<<shakeel.tId<<endl;
    return 0;
}
// Explanation
// First of all we make a struct , struct is a user data defined in which user can add multi data and different data 
/*
first write struct outside main entry then name of struct , you can write any name of struct, so we have extension of c++ therefore they give us direct code of struct
then next write body of struct {}; inside this write our different built-in data type like float,int,char etc so after the data write name of data 
i mean int id or salaray in this case both id and salary are name of data then ; because we give value of this data later \
same process doing with float or any data types then in last close the struct with }; 

then come to main mean in entry point then declare the values of that data types which is empty on above 
first write the struct name then  . then write name of data mean salaray or id etc then = give value 
same process with another data name 
and in last for output simple write output  comand then write struct name then . then name of data

we can write typedef before struct and in last body of struct mean }; between them write our short form of struct name 
i mean in above case our struct name is teacher so after typedef in last we can write te , so the output will same no give error

Remember
outside main we make a struct for teacher then inside main we should write the name of teacher like in above case we write shakeel teacher then in next line just write fisal teacher
i mean we can write just change the teacher naem and take output both or many teachers at a time like in above case

*/