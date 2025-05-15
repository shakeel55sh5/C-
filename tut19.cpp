#include<iostream>
using namespace std;

int main (){
    for (int i = 0; i < 40; i++)
    {
        cout<<i<<endl;
    if (i==2)
    {
        break;
    }
    }
    for (int a = 0; a < 40; a++)
    {
        
    if (a==2)
    {
        continue;
    
    }
    cout<<a<<endl;
    }
    
    return 0;
}
// Explanation
/*
in above case we simple write for loop whose print the number up to 40 
we use break for that whenever the loop comes to 2 then loop should stop execute
if we write output command mean cout after break then in this case c++ not print 2 and exit from it 
remember that the code of break and if should write inside of loop
*/
// Explanation
/*
in second loop we simple use continue; statement whose work on skipping just target number and then continue the loop
remeeber that for this purpose we should write output command after continue statement and outside of if
*/
// we can use use it break,continue with whle,do-while every loop