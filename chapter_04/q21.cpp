#include<iostream>
using namespace std;

struct A{
	int x;
};

enum days { sun, mon, tue, wed, thu, fri, sat};

union var{
	int i;
	float f;
	char c;
};

int main()
{
	A a;
	a.x = 7;
	days day = sun;
	cout << a.x << endl;
	cout << "enum: (day) " << day << endl;
	var v;
	v.i = 5;
	cout << "union: " << v.i << endl;
	return 0;
}
