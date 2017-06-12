//Name: Sams Khan
// FILE: date.cpp
// Class Specifications for date class
// Use integers to represent date's month,day and year. 
// Write a function to increment the date to the next day
// Write a function to display a date in both number and word format

#include <iostream>
#include <cassert>
#include <math.h>
#include "date.h"

using namespace std;

namespace date_class{
	//Post:Set's date to 01/01/2017
	date::date(){
		month=01;
		day=01;
		year=2017;	
	}

	//Pre: Date must be valid
        //Post: Declares a date object with the month, day and year
	date::date(int m, int d, int y){
		assert(vali_date(m,d,y)==true);
                month=m;
                day=d;
                year=y;

	}

        //Pre: Date must be valid
        //Post: modifies month, day and year to the input variable
	void date::set_date(int m, int d, int y){
		assert(vali_date(m,d,y)==true);
		month=m;
		day=d;
		year=y;
	}
        
        //Post: Asserts if the input month, date and year matches the variable
        void date::assert_date(int m, int d, int y){
            assert(m==month);
            assert(d==day);
            assert(y==year);
        }

        //Pre: Input numbers must not be negative
        //Post: Validates the day by returning true or false
	bool date::vali_date(int m, int d, int y){
		bool cond=false;
		assert(m>0 && d>0 && y>0);
		int max_day=0;
		int max_month=12;

			if(is_leap_year(y)==true && m==2){
				max_day=29;
			}
			else if(is_leap_year(y)==false && m==2){
				max_day=28;
			}
			else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
				max_day=31;
			}
			else if(m==2 || m==4 || m==6 || m==9 || m==11){
				max_day=30;
			}

			if(d<=max_day && m<=max_month ){
				cond=true;
			}

			else{
				cond=false;
			}

			return cond;

	}

        //Pre: Input cannot be negative
        //Post: Returns true or false to whether the year is a leap year
	//Algorithm source: 
	//https://support.microsoft.com/en-us/help/214019/method-to-determine-whether-a-year-is-a-leap-year
	
	bool date::is_leap_year(int y){
		assert(y>0);
		if(y%4==0){
			if(y%100==0){
				if(y%400==0){
					return true;
				}
				else{
					return false;
				}
			}
			else{
				return true;
			}
		}
		else{
			return false;
		}
	}

                        //Post: Must increment to a valid date
			void date::increment(){
				int max_day=0;
                                int max_month=12;

                                if(is_leap_year(year)==true && month==2){
                                        max_day=29;
                                }
                                else if(is_leap_year(year)==false && month==2){
                                        max_day=28;
                                }
                                else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || 
						month==12){
                                        max_day=31;
                                }
                                else if(month==2 || month==4 || month==6 || month==9 || month==11){
                                        max_day=30;
                                }

				if(day<max_day){
					day++;
				}
				else if(month<max_month){
                                    day=1;
                                    month++;
				}
				else if(month==max_month && day==max_day){
					day=1;
					month=1;
					year++;
				}

			}

                        //Post: Prints the current date in word and number format
			void date::print_date(){
				string m = " ";
				switch(month){
					case 1 : m = " January";
						 break;
					case 2 : m = " February";
						 break;
					case 3 : m = " March";
						 break;
					case 4 : m = " April";
						 break;
					case 5 : m = " May";
						 break;
					case 6 : m = " June";
						 break;
					case 7 : m = " July";
						 break;
					case 8 : m = " August";
						 break;
					case 9 : m = " September";
						 break;
					case 10 : m = " October";
						  break;
					case 11 : m = " November";
						  break;
					case 12 : m = " December";
						  break;
				}
				cout << "Date in number format: "<<month <<"/"<< day <<"/"<< year <<endl;
				cout << "Date in Text format: "<<day<<m<< year<<endl;

			}


}
