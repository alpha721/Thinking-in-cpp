#include<iostream>
using namespace std;
#define P(A) cout << "address of " << #A << ": " << (long)&A << endl;

int main()
{
	int* i = new int(7);
	long* l = new long;
	char* c = new char[100];
	float* f = new float[100];
	P(i);
	P(l);
	P(c);
	P(f);
	cout << *i << endl;
	delete i;
	delete l;
	delete []c;
	delete []f;
	P(i);
	P(l);
	P(c);
	P(f);
	cout << *i << endl;
	return 0;
}
	
	
