#include <iostream>
using namespace std;

class complex {
	float real;
	float imag;
public:
	complex() : real(0), imag(0) {}

	complex operator+(complex);
	complex operator*(complex);
	friend istream &operator >> (istream &input, complex &t) {
		cout<<"\nEnter the real part: ";
		input>>t.real;
		cout<<"Enter the imaginary part: ";
		input>>t.imag;
		return input;
	}
	friend ostream &operator << (ostream &output, complex &t) {
		output<<t.real<<" + "<<t.imag<<"i"<<endl;
		return output;
	}
};

complex complex::operator+(complex c) {
	complex temp;
	temp.real = real + c.real;
	temp.imag = imag + c.imag;
	return temp;
}

complex complex::operator*(complex c) {
	complex temp;
	temp.real = (real * c.real) - (imag * c.imag);
	temp.imag = (imag * c.real) + (real * c.imag);
	return temp;
}

int main() {
	complex c1, c2, c3, c4;
	cout<<"Default value in constructor: ";
	cout<<c1;
	cout<<"Enter the value of first complex number";
	cin>>c1;
	cout<<"Enter the value of second complex number";
	cin>>c2;
	c3 = c1 + c2;
	c4 = c1 * c3;
	cout<<"Addition of the complexes is : "<<c3;
	cout<<"Multiplication of the complexes is : "<<c4;
	return 0;
}
