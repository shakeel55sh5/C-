#include<iostream>
using namespace std;
class Teachers {
    protected:
    int salary;
    string name;
};
class Students : protected Teachers {
    public:
    string naam;
    int rno;

};
int main (){
    Students s1;
    s1.naam = "Shakeel Ahmad";
    s1.rno = 720;
    cout<<s1.naam<<" "<<s1.rno;

    // Teachers t1;
    // t1.salary = 35000;
    // t1.name = "Abdul Wahid";
    // cout<<t1.salary<<" "<<t1.name;
    return 0;
}