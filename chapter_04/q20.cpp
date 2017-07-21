#include<iostream>
using namespace std;

#define P(A) cout << "sizeof " << #A << ": " << sizeof(A) << endl;

struct A{
	int x;
};

struct B{
	int y;
	void fun(int y);
};

void B::fun(int y)
{
	this->y = y;
	cout << "member data in B: " << y << endl;
}

struct C{
};

int main()
{
	A a;
	B b;
	C c;
	P(A);
	P(B);
	P(C);
	P(a);
	P(b);
	P(c);
	return 0;
}	
