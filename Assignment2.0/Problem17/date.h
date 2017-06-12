//Name: Sams Khan
// FILE: date.h
// Class Specifications for date class
// Use integers to represent date's month,day and year. 
// Write a function to increment the date to the next day
// Write a function to display a date in both number and word format

#ifndef DATE_H_
#define DATE_H_

#include <iostream>
#include <string>

//CLASS INVARIANCE: assert_date, vali_date, is_leap_year, please real the documentation

namespace date_class{
	class date{
		public:
			//Post:Set's date to 01/01/2017
			date();

			//Pre: Date must be valid
			//Post: Declares a date object with the month, day and year
			date(int m, int d, int y);

			//Pre: Date must be valid
			//Post: modifies month, day and year to the input variable
			void set_date(int m, int d, int y);
                        
                        //Post:Asserts if the input month, date and year match the variables
                        void assert_date(int m, int d, int y);
                        
			//Pre: Input numbers must not be negative
			//Post: Validates the day by returning true or false
			bool vali_date(int m, int d, int y);

			//Pre: Input cannot be negative
			//Post: Returns true or false to whether the year is a leap year
			bool is_leap_year(int y);

			//Post: Must increment to a valid date
			void increment();

			//Post: Prints the current date in word and number format
			void print_date();
		
		private:
			int month;
			int day;
			int year;
		};
}
#endif
