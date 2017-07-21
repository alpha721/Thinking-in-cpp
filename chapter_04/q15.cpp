#include<iostream>
using namespace std;

#define P(A) cout << "size of " << #A << ": " << sizeof(A) << endl;

int main()
{
//	P(void);
	P(char);
	P(int);
	P(short int);
	P(long int);
	P(long long int);
	P(unsigned int);
	P(unsigned long int);
	P(unsigned short int);
	P(float);
	P(double);
	P(long double);
}
