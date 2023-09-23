#include <iostream>
using namespace std;

class Stack{
	private:
		int S[50];
		int Sind = 0;
	public:
		bool Push(int x){
			if(Sind == 50)
				cout << "Stack is full!" << endl;
			else{
				S[Sind] = x;
				Sind ++;
			}
		}
		int Pop(){
			if(Sind == 0)
				cout << "Stack is empty!" << endl;
			else{
				int n = S[Sind-1];
				Sind--;
				return n;
			}
		}
		void Display(){
			for(int a = 0; a < Sind ; a++)
				cout << S[a] << " ";
			cout << endl;
		}
};

int main()
{
	Stack s1;
	s1.Push(1);
	s1.Push(2);
	s1.Push(3);
	s1.Display();
	s1.Pop();
	s1.Display();
}
