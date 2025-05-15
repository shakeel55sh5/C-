// switch control
#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;
        case 3:
        cout<<"you are 3"<<endl;
        break;
    
    default:
    cout<<"you are in special case"<<endl;
        break;
    }
    return 0;
}

/*
Explanation
in above case we simple as it is like js use same use in this case switch case
in this we simple write switch code then in () write the vraibael on which we work and then start our body of switch
inside body we write cases , then output command then write break , it depend on us that how much cases needed for us
in last write default which means simple like else in loop same work occur in switch doing default

Remember that after wrie case or break then use : symbol not ; beacuse if you use ; symobol then gibe error
*/