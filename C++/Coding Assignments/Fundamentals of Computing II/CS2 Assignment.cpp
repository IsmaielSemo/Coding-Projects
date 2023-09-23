

//Assignment 2


#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

class point{ //default constructor for point object (set x and y to 0.0)
public:
		point(){
		x = 0.0; 
		y = 0.0;
	}
	
	point(float a, float b){ //constructor with parameter 
		x = a;
		y = b;
	}
	
	void setX(float a){ //setter for x value
		x = a;
	}
	
	void setY(float b){ //setter for y value
		y = b;
	}
	
	float getX(){ //getter for x value
		return x;
	}
	
	float getY(){ //getter for y value
		return y;
	}
	
	void Display() { //function that prints out the point in the (x,y) format
		cout << "(" << x << "," << y << ")" << endl;
	}
	
	float distance(const point &f){ //function that gets the distance between two point
		return sqrt(pow(x-f.x,2)+pow(y-f.y,2));
	}
private:
	float x;
	float y;

}; 


point Center(point C[],int n){ //function that get Center of cluster
	float xc; //varaible that will store the sum of the x coordinates
	float yc; //variable that will store the sum of the y coordinates
	for(int i = 0; i < n; i++){ //access every point in the array
		xc += C[i].getX(); //sums up the the x-coordinates 
		yc += C[i].getY(); //sums up the y-coordinates
	}
	xc = xc/n; //gets the average x
	yc = yc/n; //gets the average y
	point cc(xc,yc); //creates an object of Center of cluster
	return cc; //returns point object
	
}

void Closer(point D[], point E[], point F[] ){ //function that returns which cluster each point is closer to
	float d1, d2; //varaibles for the distance (d1 for cluster A and d2 for cluster B)
	point m = Center(D,200); //gets the center of first cluster
	point n = Center(E,200); //gets the center of second cluster
	for(int i = 0; i < 20; i++){
		d1 = F[i].distance(m); //gets d1 (distance from point to cluster A)
		d2 = F[i].distance(n); //gets d2 (distance from point to cluster B)
		if(d1 < d2) //if point is closer to cluster A
			cout <<"The point (" << F[i].getX()<< "," << F[i].getY() << ") closer to A (the first cluster)" << endl;
		else
			cout <<"The point (" << F[i].getX()<< "," << F[i].getY() << ") closer to B (the second cluster)" << endl;
	}
}
 
int main()
{
	srand(time(0));
	
	point *A;
	A = new point [200]; //cluster A
	for(int i =0; i <200; i++){
		A[i].setX((rand()%70)+20); //generates a random number for x between 20 and 90
		A[i].setY((rand()%70) +20); //generates a random number for y between 20 and 90
	}
	
	point *B;
	B = new point [200]; //cluster B
	for(int i =0; i <200; i++){
		B[i].setX((rand()%20)+ 20); //generates a random number for x between 20 and 40
		B[i].setY((rand() % 20) + 20); //generates a random number for y between 20 and 40
	}
	
	point *P;
	P = new point [20]; //array of points (we will see each of these points and their repsective distance to cluster A and B i.e closer to which cluster)
	for(int i =0; i <20; i++){
		P[i].setX((rand() %95)+ 5); //generates a random number for x between 5 and 100
		P[i].setY((rand() % 95) + 5); //generates a random number for y between 5 and 100
	}
	
	Closer(A,B,P); //calling the function
	delete [] A; //delete pointer after use
	delete [] B; //delete pointer after use
	delete [] P; //delete pointer after use
	
	return 0;
	
	
	
	
	
}
