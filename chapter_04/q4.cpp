#include<iostream>
using namespace std;

struct A{
	int x;
};

int fun_a(A* a,int x)
{
	a->x = x;
}

int display(A* a)
{
	cout << "member variable of struct A : " <<  a->x << endl;
}

int main()
{
	A a;
	fun_a(&a,5);
	display(&a);
	return 0;
}
