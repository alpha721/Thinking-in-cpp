#include<iostream>
using namespace std;

class X;

void fun(X* x);

class X{
	int a;
	public:
	X(int a);
	~X();
	friend void fun(X* x);
	void display();
};

X::X(int a)
{
	cout << "constructor called..." << endl;
	this->a = a;
}

X::~X()
{
	cout << "destructor called..." << endl;
}

void fun(X* x)
{
	cout << "inside fun..." << endl;
	x->a = 27;
}

void X::display()
{
	cout << "a: " << a << endl;
}

int main()
{
	X x(7);
	x.display();
	fun(&x);
	x.display();
	return 0;
}
	
		
	
