#include  <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

//working with the struct (displaying and sorting)

struct Billion
{
	string Fname;
	string Lname;
	int Nworth;
	string Source;
};

void Swap(struct Billion &f1, struct Billion &f2);
void Display(struct Billion s[])
{
	for(int x = 0; x < 7; x++){
		cout << s[x].Fname << "  " << s[x].Lname << "  " << s[x].Nworth << "  " << s[x].Source << endl; 
	}
}

void Sort (struct Billion s[])
{
	for(int x = 0; x < 7; x++){
		string s1 = s[x].Fname;
		for(int y = x +1; y < 7; y++){
			string s2 = s[y].Fname;
			if(s1 > s2)
				Swap(s[x], s[y]);
		}
	} 
}



void Swap(struct Billion &f1, struct Billion &f2)
{
	struct Billion temp = f1;
	f1 = f2;
	f2 = temp;
}

main()
{
	 Billion Bill_DB[7] =
	{
		{"Elon", "Musk", 189, "Tesla"},
		{"Jeff", "Bezos", 185, "Amazon"},
		{"Bernard", "Arnault", 155, "LVMH"},
		{"Bill" , "Gates", 122, "Microsoft"},
		{"Mark", "Zuckerberg", 97, "Facebook"},
		{"Zhong", "Shanshan", 94, "Nongfu Spring"},
		{"Larry", "Ellison", 89, "Oracle"},
	};
	cout << "Before Swapping : \n " << endl;
	Display(Bill_DB);
	cout << endl;
	cout << "After swapping :  \n" << endl ;
	Sort(Bill_DB);
	Display(Bill_DB);
	
}
