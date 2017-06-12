//Name: Sams Khan
// FILE: bankAccount.cpp
// Class implementation for a bank account
//      The constructot will set both the balance and the annual interest rate to some initial values(defaults to 0)
//      Class should have member functions to set and get balance or interest rate. Functions to make a deposit or
//      withdrawal. Finally there should be a function that adds interest to the balance at the current interest rate//      example: 0.5 years should be 6 months of interest.

#include <iostream>
#include <cassert>
#include <math.h>
#include "bankAccount.h"

using namespace std;

namespace bank{
	//Post: creates an empty bank account with 0 interest and balance
	account::account(){
		balance=0;
		interest=0;
	}
	//Pre: doubles cannot be less than 0
	//Post: Creates a bank account with specified balance and interest
	account::account(double b, double i){
		assert(b>=0);
		assert(i>=0);
		balance=b;
		interest=i;
	}

	//Post: returns current balance
	double account::get_balance() const{
		return balance;
	}

	//Post: returns the current interest rate
	double account::get_interest() const{
		return interest;
	}

	//Pre: amount must be greater than or equal to 0
        //Post: sets the balance
	void account::set_balance(double amount){
		assert(amount>=0);
		balance=amount;
	}

	//Pre: amount must be greater than or equal 0
        //Post: sets the interest rate
	void account::set_interest(double rate){
		assert(rate>=0);
		interest=rate;
	}

	//Pre: amount must be greater than or equal to 0
        //Post: adds the diposit amount to the balance
        void account::deposit(double amount){
		assert(amount>=0);
		balance+=amount;
	}

	//Pre: amount must be greater than or equal to 0
        //Post: subtracts the withdraw amount from the balance
	void account::withdraw(double amount){
		assert(amount>=0);
		balance-=amount;
	}
	
	//Pre: Years has to be greater than 0
        //Post: adds the the amount of interest by the interest rate by the given years
	void account::add_interest(double years){
		assert(years>0);
		balance=balance*(1+((interest/100)*years));
	}
}
