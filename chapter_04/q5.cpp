#include<iostream>
using namespace std;

struct A{
	int x;
	void fun_a(int a);
	void display();
};

void A::fun_a(int a)
{
	x = a;
}

void A::display()
{
	cout << "member variable of struct A: " << x << endl;
}

int main()
{
	A a;
	a.fun_a(5);
	a.display();
	return 0;
}
