#include<iostream>
using namespace std;

class B;

class A{
	int x;
	public:
		friend void B::fun_b(A* a);
		void fun_a(B* b);
		void display();
};

class B{
	int y;
	public:
		friend void A::fun_a(B* b);
		void fun_b(A* a);
		void display();
};

void A::fun_a(B* b)
{
	
