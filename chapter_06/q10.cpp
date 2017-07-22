#include<iostream>
using namespace std;

class X{
	int x;
	public:
		X(int x);
		~X();
		void set_x(int x);
		void display_x();
};


X::X(int x)
{
	this->x = x;
}

X::~X()
{
	cout << "destructor called..." << endl;
}

void X::set_x(int x)
{
	this->x = x;
}

void X::display_x()
{
	cout << "x : " << x << endl;
}

int main()
{
	X x(5);
	x.display_x();
	x.set_x(7);
	x.display_x();
	return 0;
}
	
