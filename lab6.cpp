#include<iostream>
using namespace std;

int main (){
    int arr[] = {10,2,30,49};
    int size = sizeof(arr)/sizeof(arr[0]);
    int num;
    int found = 0;
    cout<<"Enter the number"<<endl;
    cin>>num;
    for (int i = 0; i < size; i++){
        arr[i];
    }
    for (int i = 0; i < size; i++){
        if (arr[i] == num){
            found = 1;
            cout<<"your number found "<<endl;
            break;
        }  
    }
    if (!found){
        cout<<"your number not found"<<endl;
    }  
    return 0;
}




// #include<iostream>
// using namespace std;

// int main (){
//     int arr[] = {1,20,30,40,70};
//     int number, another = 0;
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cin>>number;
//    for(int i = 0; i<size; i++){
//     if (arr[i]==number)
//     {
//         cout<<"your number found";
//         another = 1;
//         break;
//     }
//     if (!another)
//     {
//         cout<<"number not found";
//     }
    
   
    
    
//    }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main (){
//     int arr[] = {3,4,7,8,9,8};
//     int size = sizeof(arr)/sizeof(arr[3]);
//     cout<<size;
//     // cout<<sizeof(arr[6]);
//     return 0;
// }










// #include<iostream>
// using namespace std;

// int main (){
//     int arr1[] = {5,7,2,8,-5};
//     int arr2[] = {-3,-4,6,5,5};
//     int arr3[5];
//     cout<<"sum of Array1 and Array2 is:"<<endl;
//     for(int i = 0; i<5; i++){
//         arr3[i] = arr1[i] + arr2[i];
//     cout<<arr3[i]<<",";
//     }
//    cout<<endl;
    
//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main (){
//     int numbers[10];
//     int arr2[10];
//     cout<<"Enter elements of array 1"<<endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cin>>numbers[i];
//         arr2[i] = numbers[i];
        
//     }
//     cout<<"Array 2 elements is: "<<endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cout<<arr2[i];
//     }
//     return 0;
// }








// #include<iostream>
// using namespace std;

// int main (){
//     int ages[5];
//     cout<<"Enter age of Five persons"<<endl;
//     for(int i = 0; i<5; i++){
//         cin>>ages[i];
//     }
//     for(int i= 0; i<5; i++){
//         cout<<"The age of "<<1 + i<<" person is: "<<ages[i]<<endl;
//     }
//     return 0;
// }





// #include<iostream>
// using namespace std;

// int main (){
//   int summation[4] ;
//   int result;
//   cout<<"Enter 4 numbers for add"<<endl;
//   for (int i = 0; i < 4; i++)
//   {
//    cin>>summation[i];
//    result += summation[i];
//   }
//   cout<<"The sum of array elements is: "<<result<<endl;
//     return 0;
// }
