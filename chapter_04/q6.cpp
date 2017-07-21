#include<iostream>
using namespace std;

class A{
	int x;
	public:
	  void fun(int x);
};

void A::fun(int x)
{
	this->x = x;
	cout << "new value of member variable x is : " << x << endl;
}

int main()
{
	A a;
	a.fun(7);
	return 0;
}


