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

    Teachers t1;
    t1.salary = 35000;
    t1.name = "Abdul Wahid";
    cout<<t1.salary<<" "<<t1.name;
    return 0;
}










/*#include<iostream>
using namespace std;
class Animals {
    private:
    string name;
    int type;
};
class Sheeps : private Animals {
    public:
    string naam;
    int sheeps_type;
};
int main (){
  Sheeps s1;
  s1.naam = "German Sheep";
  s1.sheeps_type = 4;
  
  
  cout<<s1.naam<<" "<<s1.sheeps_type;

    return 0;
}*/









/*#include<iostream>
using namespace std;
class Animals {
    public:
    string name;
    int foot;
    
};
class Dogs : public Animals {
    public:
    string Name;
    int Foot;
};

int main (){
    Dogs d1;
    d1.name = "German Shefat";
    
    d1.foot = 4;
    cout<<d1.name<<" "<<" "<<d1.foot;

    return 0;
}*/