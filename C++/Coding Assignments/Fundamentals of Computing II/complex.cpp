#include <iostream>
using namespace std;
complex::complex() {
	x = 0, y = 0;
}

complex::complex(double a, double b) {
	x = a;
	y = b;
}
void complex::setReal(double a) {
	x = a;
}
void complex::setImg(double b) {
	y = b;
}

double complex::get_real() const {
	return x;
}
double complex::get_img() const {
	return y;
}
void complex::display() const {
	cout << "x: " << x << " " << "y: " << y << "\n"; 	
}

complex complex::operator+(const complex& c2) {
	complex temp(x + c2.x, y + c2.y);
	return temp;
}

complex complex::operator*(const complex& c2) {
	complex temp(x*c2.x - y*c2.y, x*c2.y + y*c2.x);
	return temp;
}

