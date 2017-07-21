#include<iostream>

using namespace std;

struct A{
	int function(int x);
};

int A::function(int x)
{
	cout << "memeber function called...with value " << x << endl;
	return x;
}

int main()
{
	A a;
	a.function(1);
	return 0;
}

