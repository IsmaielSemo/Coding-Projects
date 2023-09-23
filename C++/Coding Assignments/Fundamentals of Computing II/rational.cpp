#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

rational :: rational(){
	num = 0; 
	denum = 0;
}

rational :: rational(int n){
	num = n;
	denum =1;
}

rational :: rational(int n, int d){
	num =n;
	denum = d;
}

void rational :: setNum(int n){
	num = n;
}

void rational :: setDenum(int d){
	denum = d;
}

rational rational :: add (const rational &f){
	rational temp(num*f.denum + f.num *denum,denum*f.denum);
	return temp;
}

rational rational :: subtract (const rational &f){
	rational temp(num*f.denum - f.num *denum,denum*f.denum);
	return temp;
}

rational rational :: multiply(const rational &f){
	rational temp(num*f.num,denum*f.denum);
	return temp;
}

rational rational :: divide(const rational &f){
	rational temp(num*f.denum,denum*f.num);
	return temp;
}

void rational :: readRational(){
	char slash;
	do{
		cout << "Enter num slash denum : ";
		cin >> num >> slash >> denum;
		
	}while(slash != '/');
}

void rational :: displayRational() 
{
	cout << num << '/' << denum;
}

rational rational::reduce() const
{
   int n,m,rem,gcd;

	// Get the two integers
	n = abs(num);  m = abs(denum);
	while (n > 0)
	{
		rem = m % n;
		m = n;
		n = rem;
	}
	gcd = m;
	rational g (num/gcd, denum/gcd);
	return g;
}

int rational::getNum() const
{   return num; }

int rational::getDenum() const
{   return denum; }

// Operator-Like Addition
rational rational::operator + (const rational &f2)
{   rational temp (num * f2.denum + f2.num * denum,  denum * f2.denum);
   return temp; }
   
   
// Operator-Like Comparison
bool rational::operator == (const rational &f)
{   
	return (num == f.num && denum == f.denum); 
}





