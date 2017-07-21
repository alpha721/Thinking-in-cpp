#include<iostream>
using namespace std;

class Hen{
	public:
	void display();
	class Nest{
		public:
		void display();
		class Egg{
			public:
			void display();
		};
	};
};

void Hen::display()
{
	cout << "Hen display" << endl;
}

void Hen::Nest::display()
{
	cout << "Nest display" << endl;
}

void Hen::Nest::Egg::display()
{
	cout << "Egg display" << endl;
}

int main()
{
	Hen h;
	Hen::Nest n;
	Hen::Nest::Egg e;
	h.display();
	n.display();
	e.display();
	return 0;
}
			
