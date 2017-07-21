#include<iostream>
#define NDEBUG
#include<cassert>
using namespace std;

int main()
{
	int x = 10;
	assert( x != 10);
	cout << "debugging is off...you should not see this line if debugging is on" << endl;
	return 0;
}
