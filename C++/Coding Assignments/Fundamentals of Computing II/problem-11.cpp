

//Problem11

#include <iostream>
#include <cmath>
using namespace std;


struct point{
	double x, y, z; //declaration of the struct
};

int minDistance(point a[3]){
	int i = 0; //the index that will be returned
	double md = sqrt(pow(a[0].x,2)+pow(a[0].y,2)+pow(a[0].z,2)) ; //get the length of the 1st entry and assume it's the smallest
	for(int b = 1; b < 3; b++){
		double distance = sqrt(pow(a[b].x,2)+pow(a[b].y,2)+pow(a[b].z,2));
		if(distance < md){
			md = distance; //change md to the now smallest distance
			i = b; //index changed to one containing smallest value
		}
	}
	return i;
}

int main(){
	//Everything below is simply testing the function and outputing to console
	
	point p[3], q[3];
	p[0].x = 1, p[0].y = 2, p[0].z = 3;
	p[1].x = 4, p[1].y = 5, p[1].z = 7;
	p[2].x = 3, p[2].y = 6, p[2].z = 6;
	cout << "First run : \nThe points are : " << endl;
	for(int j =0; j<3;j++){
		cout << "(" << p[j].x << "," << p[j].y <<"," << p[j].z <<")" << endl;
	}
	cout << "The index of the point with the smallest distance from the origin is : "<<minDistance(p) << endl;
	cout << "-----------------------------------" << endl;
	
	q[0].x = 11, q[0].y = 9, q[0].z = 3;
	q[1].x = 2, q[1].y = 2, q[1].z = 3;
	q[2].x = 43, q[2].y = 21, q[2].z = 3;
	
	cout << "Second run : \nThe points are : " << endl;
	for(int j =0; j<3;j++){
		cout << "(" << q[j].x << "," << q[j].y <<"," << q[j].z <<")" << endl;
	}
	cout << "The index of the point with the smallest distance from the origin is : "<<minDistance(q) << endl;
	cout << "-----------------------------------" << endl;
	
	return 0;
	
}
