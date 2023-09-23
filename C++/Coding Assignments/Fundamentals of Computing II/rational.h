#ifndef RATIONAL_H
#define RATIONAL_H

class rational{
	public:
		rational();
		rational(int);
		rational(int,int);
		void setNum(int);
		void setDenum(int);
		rational add(const rational &f);
		rational subtract(const rational &f);
		rational multiply(const rational &f);
		rational divide(const rational &f);
		void readRational();
		void displayRational();
		rational reduce() const;
		int getNum() const;
		int getDenum() const;
		rational operator + (const rational &);
		bool operator == (const rational &);
	private:
		int num;
		int denum;
};

#endif
#include "rational.cpp"
