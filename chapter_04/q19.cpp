#include<iostream>
using namespace std;

struct A{
	struct B{
		int y;
		void fun_b(int y);
	};
	int x;
	void fun_a(int x);
};

void A::fun_a(int x)
{
	this->x = x;
	cout << "member data in A: " << x << endl;
}

void A::B::fun_b(int y)
{
	this->y = y;
	cout << "inner member data in B: " << y << endl;
}

int main()
{
	A a;
	A::B b;
	a.fun_a(7);
	b.fun_b(5);
	return 0;
}
