//File: complex.h
//
//Author: Sams Khan
//Description: Class to make operators for complex and imaginary numbers.




#ifndef COMPLEX_H
#define COMPLEX_H

class complex{
	public:
		complex(double a=0.0,double b=0.0);
		//Precondition: a and b are doubles
		//Postcondition: a represents real number and b represents imaginary number
		double getA() const {return real;}//Postcondition: Return real number
		double getB() const {return imag;}//Postcondition: returns imaginary number

	private:
		double real;
		double imag;

		


};

complex operator + (const complex& a, const complex& b);//PostCondition: sum of complex numbers and sum of real numbers returned separately
complex operator - (const complex& a, const complex& b);//PostCondition: difference of complex numbers and real numbers returned separately
complex operator * (const complex& a, const complex& b);//PostCondition: multiply complex numbers and real numbers returned seperately
complex operator / (const complex& a, const complex& b);//PostCondition: division of complex numbers and real numbers returned seperately
double conjugate(complex const& a);//Postcondition: Conjugate of the complex number
#endif
