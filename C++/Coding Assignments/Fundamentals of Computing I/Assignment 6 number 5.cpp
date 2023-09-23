#include <iostream>
using namespace std;
// 1 1 2 3 7 --> 7 3 2 1 1
class Stack{
	private:
		int S[5];
		int Sind = 0;
	public:
		void Push(int x){
			if(Sind == 5)
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
		
		bool isEmpty(){
			if(Sind == 0)
				return true;
			else
				return false;
		}
		void Reverse(Stack &Source, Stack &Target){
			if(!Source.isEmpty()){
				Target.Push(Source.Pop());
				Reverse(Source, Target);
		}
	}
};



main()
{
	Stack s1, s2;
	int z;
	cout << "Enter numbers : ";
	for(int x = 0; x < 5; x++){
		cin >> z;
		s1.Push(z);
	}
	s1.Display();
	cout << "=====================" << endl;
	s1.Reverse(s1,s2);
	s2.Display();
}
