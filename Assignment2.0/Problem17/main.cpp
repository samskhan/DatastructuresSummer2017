//File:Main.cpp
//Author:Sams Khan
//Description: test the class date

#include "date.h"
#include <cassert>
#include <cstdlib>
#include <iostream>

using namespace std;
using namespace date_class;

int main(){
	date d (10,24,1995);//testing constructor
	d.assert_date(10,24,1995);
	cout<<" Constructor test, it should output 10/24/1995  "<< endl;
        
	d.print_date();//Testing print date

	d.set_date(05,03,2000);//Testing set_date
        
        d.assert_date(5,3,2000);
	cout<< "set_date test, it should output 5/3/2000"<<endl;
	
	d.print_date(); 

	d.increment();//Testing increment
        
        d.assert_date(5,4,2000);
        
	cout<<"testing increment, it should output 5/4/2000"<<endl;
	
	d.print_date();
//################################# TESTING END OF MONTH##############
        cout<<"\n"<<endl;cout<<"\n"<<endl;
	cout<< " Testing end of month "<<endl;
        
        d.set_date(1,31,2000);
        
        cout<< "set_date test, it should output 1/31/2000"<<endl;
        d.print_date();
        
        d.increment();
        
        d.assert_date(2,1,2000);
        cout<< "we just did an increment, the date printed should be 2/1/2000"<<endl;
        d.print_date(); 
//####################################### TESTING END OF LEAPYEAR MONTH###########
        cout<<"\n"<<endl;cout<<"\n"<<endl;
        cout<< " Testing end of leap year month "<<endl;
        
        d.set_date(2,28,2004);
        
        cout<< "set_date test, it should output 2/28/2004"<<endl;
        d.print_date();
        
        d.increment();
        
        d.assert_date(2,29,2004);
        cout<< "we just did an increment, the date printed should be 2/29/2004"<<endl;
        
        d.print_date();
        
        d.set_date(2,29,2004);
        
        cout<< "set_date test, it should output 2/29/2004"<<endl;
        d.print_date();
        
        d.increment();
        
        d.assert_date(3,1,2004);
        cout<< "we just did an increment, the date printed should be 3/1/2004"<<endl;
        
        d.print_date();
//##################################### TESTING END OF NON-LEAP YEAR MONTH################  
        cout<<"\n"<<endl;cout<<"\n"<<endl;
         cout<< " Testing end of non leap year month "<<endl;
        
        d.set_date(2,28,2006);
        
        cout<< "set_date test, it should output 2/28/2006"<<endl;
        d.print_date();
        
        d.increment();
        
        d.assert_date(3,1,2006);
        cout<< "we just did an increment, the date printed should be 3/1/2006"<<endl;
        
        d.print_date();
return 0;
}

