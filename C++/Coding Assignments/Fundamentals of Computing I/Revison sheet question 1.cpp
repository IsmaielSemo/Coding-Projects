#include <iostream>
#include <iomanip>
using namespace std;

void test ( int, int&, int&);
int main( )
{
int d = 5, e = 6, f = 7, a = 8, b = 9;
test (d, e, f);
cout<< "In the main program after the 1st. call" <<endl;
cout<< "the variables are: "  <<setw(3) << e <<setw(3) << d <<setw(4) << f <<endl;
cout<< "---------------------------------------------- "<<endl;
test (a, b, f);
cout<<"In the main program after the 2nd. call " <<endl;
cout<< "the variables are: " <<setw(3) << a <<setw(3)
<<b<<setw(4) << f <<endl;
return 0;
}
void test(int t, int& s, int& x)
{
s = 10;
s = s +20;
x = x + s + t;
t =3 * s;
cout<< "Function test Output: " <<setw(3) << s <<setw(3) << t <<setw(3) << x <<endl;
}
