//Name: Sams Khan
// FILE: geoAreas.cpp
// Using the area class implementation from geoAreas.cpp, this main function calculates the area of geometric
// shapes using the sides 1,2,3,4,5,6.

#include <iostream>
#include "geoAreas.h"
#include <cassert>
#include <cstdlib>
#include <math.h>

using namespace std;
using namespace geoareas;

int main(){
	area ob(1.0);//Instantiates area object and sets default value
	for(int i=1;i<7;i++){//for loop for printing the values
		ob.setside(i);//sets the side from 1-6 according to the counter i
		
		//Print functions
		
		cout<<"Area of Equilateral Triangle Side "<<i <<":"<<ob.equiArea()<<endl;
		
		cout << "Area of square side "<<i <<":"<<ob.squareArea()<<endl;

		cout << "Area of regular pentagon side "<<i <<":"<<ob.regPentArea()<<endl;

		cout << "Area of a regular Hexagon side "<<i <<":"<<ob.regHexArea()<<endl;

		cout << "Area of a regular Heptagon side "<<i <<":"<<ob.regHepArea()<<endl;

		cout << "Area of regular octagon side "<<i <<":"<<ob.regOctArea()<<endl;

		cout << "\n";

	
	
	}
return 0;
}
