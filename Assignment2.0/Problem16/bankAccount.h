//Name: Sams Khan
// FILE: bankAccount.h
// Class Specifications for a bank account
//      The constructot will set both the balance and the annual interest rate to some initial values(defaults to 0)
//      Class should have member functions to set and get balance or interest rate. Functions to make a deposit or
//      withdrawal. Finally there should be a function that adds interest to the balance at the current interest rate//      example: 0.5 years should be 6 months of interest.

#ifndef BANK_ACCOUNT_H_
#define BANK_ACCOUNT_H_

#include <iostream>
#include <string>

namespace bank{
        class account{
                public:
                        //Post: creates an empty bank account with 0 balance and interest
                        account();

                        //Pre: doubles can't be less than 0
                        //Post: creates an empty bank account with b as balance and i as interest rate
                        account(double b, double i);

                        //Post: returns the current balance
                        double get_balance() const;

                        //Post: returns the current interest rate
                        double get_interest() const;

                        //Pre: amount must be greater than 0
                        //Post: sets the balance
                        void set_balance(double amount);

                        //Pre: amount must be greater than 0
                        //Post: sets the interest rate
                        void set_interest(double rate);

                        //Pre: amount must be greater than 0
                        //Post: adds the diposit amount to the balance
                        void deposit(double amount);

                        //Pre: amount must be greater than 0
                        //Post: subtracts the withdraw amount from the balance
                        void withdraw(double amount);

                        //Pre: Years has to be greater than 0
                        //Post: adds the the amount of interest by the interest rate by the given years
                        void add_interest(double years);

                private:
                        double balance;
                        double interest;

                };
}

#endif

