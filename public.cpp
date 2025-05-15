#include<iostream>
using namespace std;
class Students {
    public:
    string name;
    int rno;
    int semester;
};
class Teachers : public Students {
    public:
    string Name;
    int salary;
};

int main (){
    Teachers s1;
    s1.name = "Shakeel Ahmad";
    s1.rno = 720;
    s1.semester = 2;
    cout<<s1.name<<" "<<s1.rno<<" "<<s1.semester;

    return 0;
}