#include <iostream>

#include "complex.h"
#include <cassert>
using namespace std;
using namespace complex_k;
int main(){
//Testing Constructor
complex a (2.0,8.0);
assert (a.getA()==2.0);
assert (a.getB()==8.0);

//Testing addition operator
complex a1(3.0,2.0);
complex a2(2.0,1.0);
complex a3 = a1+a2;
assert (a3.getA()==5.0);
assert (a3.getB()==3.0);

//Testing Subtraction operator
complex a4(3.0,2.0);
complex a5(2.0,1.0);
complex a6 = a4-a5;
assert (a6.getA()==1.0);
assert (a6.getB()==1.0);

//Testing multiplication operator
complex a7(3.0,2.0);
complex a8(2.0,1.0);
complex a9 = a1*a2;
assert (a9.getA()==6.0);
assert (a9.getB()==2.0);

//Testing division operator
complex a10(3.0,2.0);
complex a11(2.0,1.0);
complex a12 = a1/a2;
assert (a12.getA()==(3.0/2.0));
assert (a12.getB()==(2.0/1.0));

//Testing the conjugation operator
complex a13(3.0,2.0);
complex result = a13.conjugate();
assert(result.getB()==(-2.0));
cout<<"Passed all the tests"<<endl;

return 0;
}
