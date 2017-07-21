#include<iostream>
#include<string>
using namespace std;


char* fun(char* str)
{
	char* copy = new char[sizeof(str)];
	int i = 0;
	while ( str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return copy;
}

int main()
{
	char str[] = "hello world";
	char* copy = fun(str);
	char* copy2 = fun(copy);
	cout << "original string: " <<  str << endl;
	cout << "address: " << (long)&str << endl;
	cout << "copy string: " << copy << endl;
	cout << "address: " << (long)&copy << endl;
	cout << "second copy string: " << (long)&copy2 << endl;
	cout << "address: " << copy2 << endl;	
	delete []copy;
	delete []copy2;
	return 0;
}
	
