#include<iostream>
using namespace std;
class Girls {
    private:
    string name;
    int rno;
    int semester;
};
class Boys : private Girls {
    public:
    string naam;
    int Student_id;
};
int main (){
  Boys s1;
  s1.naam = "Shakeel Ahmad";
  Girls g1;
  g1.rno = 720;
  cout<<s1.naam<<" "<<g1.rno;

    return 0;
}