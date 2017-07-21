#include<iostream>
using namespace std;

#define P(A) cout << #A << ": " << A << endl;

class A{
	int x;
	protected:
		int y;
		void fun_a(int y);
	public:
		int z;
		void fun_b(int z);
};

void A::fun_a(int y)
{
	this->y = y;
	cout << "this is a protected function...value of protected data member y : " << y << endl;
}

void A::fun_b(int z)
{
	this->z = z;
	cout << "this is a public function...value of public data member z : " << z << endl;
}

int main()
{
	A a;
/* uncommenting the below line gives error as y is a protected member */
//	P(a.y);
	P(a.z); /* z is a public member so it compiles succesfully */

//	a.fun_a(7); /* uncommenting it also gives error as fun_a is a protected member function */
	a.fun_b(5); // compiles succesfully
// 	P(a.x);
	
}
	
