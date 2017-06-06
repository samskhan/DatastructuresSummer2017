//Name: Sams Khan
// FILE: geoAreas.cpp
// Class implementation of the calculation of areas of different geometric shapes

#include "geoAreas.h"
#include <cassert>
#include <cstdlib>
#include <math.h>
#include <iostream>

using namespace std;

namespace geoareas{
//Pre: a cannot be negative
//Post: Sets the private variable side to the value of a
	area::area(double a){
	side = a;

	}

//Post: Calculates the area of an equilateral triangle using the value of side.
	 double area::equiArea(){
		  return ((sqrt(3)*side*side)/4);
	 }

//Post: Calculates the area of an square using the value of side.
	  double area::squareArea(){
		   return (side*side);
		    }

//Post: Calculates the area of a regular pentagon using the value of side.
	  double area::regPentArea(){
		  return ((1.0/4.0)*sqrt(5.0*(5.0+(2.0*sqrt(5.0))))*side*side);

	  }

//Post: Calculates the area of a regular hexagon using the value of side.
	  double area::regHexArea(){
		  return((3*sqrt(3)*side*side)/2);
	  }

//Post: Calculates the area of a regular heptagon using the value of side.
	  double area::regHepArea(){
		  return ((7.0*side*side/4.0)*(1.0/tan(M_PI/7.0)));

	  }

//Post: Calculates the area of a regular octagon using the value of side.
	 double area::regOctArea(){
		  return (2*(1+sqrt(2))*side*side);
	  }
}
