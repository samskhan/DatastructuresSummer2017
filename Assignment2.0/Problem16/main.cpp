//File:Main.cpp
//Author:Sams Khan
//Description: test the class bank

#include "bankAccount.h"
#include <cassert>
#include <cstdlib>
#include <iostream>

using namespace std;
using namespace bank;
int main(){
account a (1000.0,3.875);//Testing constructor

assert(a.get_balance()==1000.0);//Testing getter method for balance

assert(a.get_interest()==3.875);//Testing getter method for interest
cout<<"Assertion to test starting balance of 1000 and interest of 3.875 is successful"<<endl;

a.deposit(500.0);//Testing deposit method 

assert(a.get_balance()==1500.0);//Testing if the diposit worked
cout<<"Assertion to test deposit of 500 is successful"<<endl;

a.withdraw(500.0);//Testing withdraw method

assert(a.get_balance()==1000.0);//Testing if withdraw worked
cout<<"Assertion to test withdraw of 500 is successful"<<endl;

a.set_interest(4.0);//Testing set interest

assert(a.get_interest()==4.0);//Testing if setter method worked for interest
cout<<"Assertion to test setting interest rate to 4 is successful"<<endl;

a.add_interest(5.0);//Testing add interest method

assert(a.get_balance()==1200);//testing if adding balance worked
cout<<"Assertion to test adding 5 years of interest is successful"<<endl;


cout<<"All tests passed successfully"<<endl;

return 0;
}


