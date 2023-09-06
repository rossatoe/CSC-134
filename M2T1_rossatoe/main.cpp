#include <iostream>
#include <iomanip>
using namespace std;
/*
CSC 134
M2T1 - Receipt Calculator
rossatoe
09/06/2023
This program should take the price of meal, which is $5.99, and print out a simple text

The price before tax
The amount of tax owed (8%)
The total including tax
*/

int main(){
cout<<"Receipt Calculator"<< endl;
double menuPrice = 5.99, taxPercent = 0.07, taxDollars = 0/*in dollars*/, totalPrice = 0;
//tax in $ is meal price times tax percent
//then add the tax in $ to get the total $
cout<<fixed<<setprecision(2);
cout<<"Menu price: $"<<menuPrice<< endl;
cout<<"Tax price:  $"<< taxDollars<<endl;
cout<<"____________________________"<<endl;
cout<<"Your total: $"<<totalPrice<<endl;
cout<<"Thank you for dining with us!"<<endl;


return 0;
}
