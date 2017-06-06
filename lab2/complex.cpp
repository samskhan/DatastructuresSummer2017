//File: complex.cpp
//Author: Sams Khan
//Description: class implementation for complex.h


#include "complex.h"
#include <cassert>
#include <cstdlib>
#include <iostream>

using namespace std;
namespace complex_k{
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
//Postcondition: Conjugates the complex number in the complex object
complex complex::conjugate(){
return complex((*this).getA(),((-1)*((*this).getB())));
}
}
