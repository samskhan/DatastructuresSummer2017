//Name: Sams Khan
// FILE: geoAreas.cpp
// Declarations for the calculation of areas of different geometric shapes

#ifndef GEO_AREAS_AREA_H
#define GEO_AREAS_AREA_H

#include <iostream>
#include <cstdlib>

namespace geoareas{
	//Different areas are calculated in this class
	class area{
		public:
			area(double a);
			double getside() const{return side;}
			void setside(double a){side = a;}
			double equiArea();
			double squareArea();
			double regPentArea();
			double regHexArea();
			double regHepArea();
			double regOctArea();

		private:
			double side;
	};
}
#endif
