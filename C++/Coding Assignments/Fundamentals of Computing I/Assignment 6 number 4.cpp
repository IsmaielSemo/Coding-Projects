#include <iostream>
#include <cmath>
using namespace std;

class Circle{
	public:
		float xcenter;
		float ycenter;
		float radius;
		float area;
		float perimeter;
		Circle(){
			xcenter = 0.0;
			ycenter = 0.0;
			radius = 0.0;
		}
		Circle(int x, int y, int r){
			xcenter = x;
			ycenter = y;
			radius = r;
		}
		GetArea(){
			area = 3.14 * radius * radius;
		}
		GetPerimeter(){
			perimeter = 2 * 3.14 * radius;
		}
		float GetDistance(Circle c1, Circle c2){
			return sqrt(pow(c2.xcenter-c1.xcenter,2)+pow(c2.ycenter-c1.ycenter,2));
		}
};

class Square{
	public:
		float centerX;
		float centerY;
		float side;
		float Area;
		float diagonal;
		float Perimeter;
		Square(){
			centerX = 0.0;
			centerY = 0.0;
			side = 0,0;
		}
		Square(float xc, float yc, float s){
			centerX = xc;
			centerY = yc;
			side = s;
		}
		GetDiagonal(){
			diagonal = sqrt(2) * side;
		}
		GetArea(){
			Area = side * side; 
		}
		GetPerimeter(){
			Perimeter = 4 * side;
		}
		
};


int main(){
	return 0;
}
