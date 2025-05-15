// #include<iostream>
// using namespace std;
//     class Demo{
//         public:
//         int a;//public member

//     };
//     {
//         Demo obj1;
//         obj1.a = 2;
//         cout<<obj1;
//         return 0;
//     }
// int main (){
    
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Demo
// {
//     public:
//     int a;//public member

// };

// int main (){
//     Demo obj1;
//     obj1.a = 2;
//     cout<<obj1.a;
        
//     return 0;
// }

#include<iostream>
using namespace std;
class Demo
{
    private:
    int a;//public member
    public:
    void get value(){
        a = 2;
    }
};

int main (){
    Demo obj1;
    obj1.a = 2;
    cout<<obj1.a;
        
    return 0;
}