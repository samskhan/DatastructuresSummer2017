//File: complex.cpp
//Author: Sams Khan
//Description: class file for complex.h


#include "complex.h"
#include <cassert>
#include <cstdlib>
#include <iostream>

using namespace std;
//Precondition: a and be must be doubles
//Postcondition: a represents a real number and b represents an imaginary numbers
complex::complex(double a,double b){
real=a;
imag=b;


}
//Postcondition: sum of complex numbers and sum of real number seperately
complex operator +(const complex& a, const complex& b){
double z=a.getA()+b.getA();
double x=a.getB()+b.getB();
return complex(z,x);
}

//Postcondition: Difference of complex numbers and real numbers returned seperately
complex operator -(const complex& a, const complex& b){
double z=a.getA()-b.getA();
double x=a.getB()-b.getB();
return complex(z,x);
}
//Postcondition: Product of complex numbers and real numbers are returned seperately
complex operator *(const complex& a, const complex& b){
double z=a.getA()*b.getA();
double x=a.getB()*b.getB();
return complex(z,x);
}
//Postcondition: Division of complex numbers and real numbers are returned seperately
complex operator /(const complex& a, const complex& b){
double z=a.getA()/b.getA();
double x=a.getB()/b.getB();
return complex(z,x);
}
//Precondition: Input must be a complex object
//Postcondition: Conjugates the complex number in the complex object
double conjugate(complex const &a){
return ((-1)*a.getB());
}
