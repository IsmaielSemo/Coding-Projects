#include "complex.h"
#include <iostream>
using namespace std;

int main() {
	complex c1; //Call the default constructor
	complex c2(5, 10); //Call the parameterized constructor
	c1.setReal(3);
	c1.setImg(4);
	c1.display();
	c2.display();
//	complex c3;
//	c3 = c1 + c2;
//	c3.display();
	complex c4 = c1 * c2;
	c4.display();
	return 0;
}
