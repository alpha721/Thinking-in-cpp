#include<iostream>
#include<string>
using namespace std;

class Simple{
	public:
		Simple(string s);
		~Simple();
};

Simple::Simple(string s)
{
	cout << s << endl;
}

Simple::~Simple()
{
	cout << "destructor called..." << endl;
}

int main()
{
	string str;
	cin >> str;
	Simple s(str);
	cout << "inside the main..." << endl;
	return 0;
}


