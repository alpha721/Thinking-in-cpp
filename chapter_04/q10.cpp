#include<iostream>
using namespace std;

struct A{
	public:
		void func(int x);
};

void A::func(int x)
{
	cout << "function called with value " << x << endl;
}

int main()
{
	A a;
	a.func(7);
	return 0;
}
