#include<iostream>
using namespace std;

class A;
class B;
class C;

class A{
	int a;
	public:
		void display_a();
		void modify_a(C* c);
};

void A::display_a()
{
	cout <<"this is the A class display" << endl;
}

class B{
	int b;
	public:
		void display_b();
		void modify_b(C* c);
};

void B::display_b()
{
	cout << "this is the B class display" << endl;
}

class C{
	int data;
	public:
		void display();
		friend A;
		friend void B::modify_b(C* c);
};

void B::modify_b(C* c)
{
	cout << "inside B's modify function" << endl;
	c->data = 77;
}

void A::modify_a(C* c)
{
	cout << "inside A's modify function" << endl;
	c->data = 88;
}

void C::display()
{
	cout << "inside C's display function " << endl;
	cout << " C's data: " << data << endl;
}

	
int main()
{
	A a;
	B b;
	C c;
	a.display_a();
	b.display_b();
	b.modify_b(&c);	
	c.display();
	a.modify_a(&c);
	c.display();
}
		

