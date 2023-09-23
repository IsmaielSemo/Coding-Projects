#include <iostream>
using namespace std;

class counter{
	private:
		int count;
		int maxValue;
	public:
		counter(){
			count = 0;
			maxValue = INT_MAX;
		}
		counter(int i){
			count = 0;
			maxValue = i;
		}
		void increment(){
			count++;
		}
		void decrement(){
			count--;
		}
		void SetCount(int n){
			count = n;
		}
		void SetMaxValue(int n){
			maxValue = n;
		}
		int GetCount(){
			return count;
		}
		int GetMaxValue(){
			return maxValue;
		}
		bool atMax(){
			if(count == maxValue)
				return true;
		}
		bool atMin(){
			if(count == 0)
				return true;
		}
		bool lessThanC(counter a, counter b){
			if(a.GetCount() < b.GetCount())
				return true;
			else
				return false;
		}
		int compareCounter(counter a, counter b){
			if(a.GetCount() < b.GetCount())
				return -1;
			else if(a.GetCount() == b.GetCount())
				return 0;
			else
				return 1;
		}
};

int main()
{
	return 0;
}
