class complex {
	private:
		double x;
		double y;
	public:
		complex();
		complex(double, double);
		void setReal(double);
		void setImg(double);
		double get_real() const;
		double get_img() const;
		void display() const;
		complex operator+(const complex& c2);
		complex operator*(const complex& c2);
};
#include "complex.cpp"
