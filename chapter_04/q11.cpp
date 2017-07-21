#include<iostream>
using namespace std;

#define FLAG

int main()
{
	#ifdef FLAG
		cout << "flag is defined " << endl;
	#endif
	#ifndef FLAG
		cout << "flag is undefined " << endl;
	#endif
	return 0;
}
