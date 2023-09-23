#include <iostream>
#include <cstring>
using namespace std;

class House{
	private:
		string address;
		int numberofrooms;
		float area;
		float costpersquaremeter;
	public:
		House(){
			address = "";
			numberofrooms = 0;
			area = 0.0;
			costpersquaremeter = 0;
		}
		House(string ad, int n, float a, float cpsm){
			address = ad;
			numberofrooms = n;
			area = a;
			costpersquaremeter = cpsm;
		}
		SetNumberOfRooms(int n){
			numberofrooms = n;
		}
		int GetNumberOfRooms(){
			return numberofrooms;
		}
		float GetHousePrice(){
			return area * costpersquaremeter;
		}
		void print(){
			cout << "( \" " << address << "\" " << numberofrooms << " rooms " << area << " m " << GetHousePrice() << " EGP )" << endl;
		}
};

int main(){
	return 0;
	
}
