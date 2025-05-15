// #include<iostream>
// using namespace std;

// int main (){
//     char drinkjuice;
//     cout<<"Select the drink which you want"<<endl;
//     cout<<"For (Tea write = T)(Juice write = J)(Coffee write = C)"<<endl;
//     cin>>drinkjuice;
//     if(drinkjuice == 'J' || drinkjuice == 'j'){
//         cout<<"you select juice"<<endl;
//     }else if(drinkjuice == 'T' || drinkjuice == 't'){
//         cout<<"you select Tea"<<endl;
//     }else if(drinkjuice == 'C' || drinkjuice == 'c'){
//         cout<<"you select Coffee"<<endl;
//     }else{
//         cout<<"you choose wrong ";
//     }
//     return 0;
// }







#include<iostream>
using namespace std;

int main (){
    cout<<"Welcome to vending machine"<<endl;
    int coffee, drink, tea, choice; 
    cout<<"Avalible Items with prices: "<<endl;
    cout<<"1: Coffee price = 25cents"<<endl;
    cout<<"2: Drink price = 15cents"<<endl;
    cout<<"3: Tea price = 50cents"<<endl;
    cout<<"please insert a coin/rupees for taking item"<<endl;
    int coin;
    cin>>coin;
    cout<<"choose the items"<<endl;
    cout<<"1: for Coffee"<<endl;
    cout<<"2: for Drink"<<endl;
    cout<<"3: for Tea"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1: 
        // choice = 1;
        cout<<"you choose coffee"<<endl;
        break;
    case 2:
        // choice = 2;
        cout<<"you choose drink"<<endl;
        break;
    case 3:
        // choice = 3;
        cout<<"you choose tea"<<endl;
        break;
    default:
        cout<<"you select invalid item"<<endl;
        break;
    }
    cout<<"you have: "<<coin<<" in your account"<<endl;
    if(coin<=15){
        cout<<"you have low amount you can not take any item"<<endl;
    }else if(coin<=50){
        cout<<"you can buy just drink and coffee"<<endl;
    }else{
        cout<<"you have a lot of money \n"<<"you can buy every item"<<endl;
    }
    if(coin>50){
        cout<<"your change is: ";
        cout<<coin-50<<endl;
    }else if(coin>=30){
        cout<<"Thank you for using vending machine"<<endl;
    }else if(coin<15){
        cout<<"you have insufficent funds"<<endl;
    }
    cout<<"successful Transcition";
    return 0;
}

































// #include <iostream>

// using namespace std;

// int main() {
//     int choice, insertedAmount = 0, itemPrice, change;
//     const int ITEM1_PRICE = 25;
//     const int ITEM2_PRICE = 30;
//     const int ITEM3_PRICE = 35;

//     cout << "Vending Machine Menu:\n";
//     cout << "1. Item 1: $" << ITEM1_PRICE / 100.0 << endl;
//     cout << "2. Item 2: $" << ITEM2_PRICE / 100.0 << endl;
//     cout << "3. Item 3: $" << ITEM3_PRICE / 100.0 << endl;

//     cout << "Enter your choice: ";
//     cin >> choice;

//     switch (choice) {
//         case 1:
//             itemPrice = ITEM1_PRICE;
//             break;
//         case 2:
//             itemPrice = ITEM2_PRICE;
//             break;
//         case 3:
//             itemPrice = ITEM3_PRICE;
//             break;
//         default:
//             cout << "Invalid choice. Please try again.\n";
//             return 1;
//     }

//     while (insertedAmount < itemPrice) {
//         int coinValue;
//         cout << "Insert a coin (1, 5, 10, or 25 cents): ";
//         cin >> coinValue;

//         if (coinValue == 1 || coinValue == 5 || coinValue == 10 || coinValue == 25) {
//             insertedAmount += coinValue;
//         } else {
//             cout << "Invalid coin value. Please insert a valid coin.\n";
//         }
//     }

//     if (insertedAmount >= itemPrice) {
//         cout << "Dispensing your item...\n";
//         change = insertedAmount - itemPrice;
//         if (change > 0) {
//             cout << "Your change is $" << change / 100.0 << endl;
//         }
//         cout << "Thank you for your purchase!\n";
//     } else {
//         cout << "Insufficient funds. Please try again.\n";
//     }

//     return 0;
// }









// #include<iostream>
// using namespace std;

// int main (){
//     int year;
//     cout<<"Enter year";
//     cin>>year;
//     if(year %4 ==0){
//         if(year %100 ==0){
//             if(year %400 ==0){
//                 cout<<year<<" is a leap year";
//             }else{
//                 cout<<year<<" is not a leap year";
//             }
//         }else{
//             cout<<year<<" year is a leap year";
//         }
//         }else{
//             cout<<year<<" is not a leap year";
//         }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main() {
//     int num1, num2, num3;
//     cout << "Enter three numbers: "<<endl;
//     cin >> num1 >> num2 >> num3;
//     if (num1>=num2){
//         if(num1>=num3){
//             cout<<num1<<" is greater number"<<endl;
//         }else{
//             cout<<num3<<" is a greater number"<<endl;
//         }
//     }else if(num2>=num1){
//         if(num2>=num3){
//             cout<<num2<<" is greater number"<<endl;
//         }else{
//             cout<<num3<<" is greater number"<<endl;
//         }
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     if (year % 4 == 0) {
//         if (year % 100 == 0) {
//             if (year % 400 == 0) {
//                 cout << year << " is a leap year." << endl;
//             } else {
//                 cout << year << " is not a leap year." << endl;
//             }
//         } else {
//             cout << year << " is a leap year." << endl;
//         }
//     } else {
//         cout << year << " is not a leap year." << endl;
//     }

//     return 0;
// }