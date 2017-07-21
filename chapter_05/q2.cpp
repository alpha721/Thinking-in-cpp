#include<iostream>
#include<string>

using namespace std;

/*struct Lib{
	string s[3];
};
	

int main()
{
	Lib x;
	x.a = "this is a.";
	x.b = "this is b.";
	x.c = "this is c.";
	cout << x.a << endl;
	cout << x.b << endl;
	cout << x.c << endl;
}
*/

class Libc{
	private:
/*		string a;	
		string b;
		string c;
*/
		string s[3];
	public:
		void seta(string s);
		string geta();
		void setb(string s);
		string getb();
		void setc(string s);
		string getc();
};

void Libc::seta(string s)
{
	this->a = s;
}

string Libc::geta()
{
	return this->a;
}

void Libc::setb(string s)
{
	this->b = s;
}

string Libc::getb()
{
	return this->b;
}

void Libc::setc(string s)
{
	this->c = s;
}

string Libc::getc()
{
	return this->c;
}

int main()
{
	Libc l;
	l.seta("this is a");
	l.setb("this is b");
	l.setc("this is c");
	cout << l.geta() << endl;
	cout << l.getb() << endl;
	cout << l.getc() << endl;
	return 0;
}
