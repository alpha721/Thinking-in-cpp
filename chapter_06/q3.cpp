#include<iostream>
using namespace std;

class X{
	int a;
	public:
		X(int a);
		~X();
};

X::X(int a)
{
	this->a = a;
	cout << "constructor called..." << endl;
	cout << "value of data member: " << a << endl;
}

X::~X()
{
	cout << "destructor called..." << endl;
	cout << "value of data member: " << a << endl;
}

int main()
{
	X x(7);
	cout << "inside main..." << endl;
	return 0;
}
	
	
