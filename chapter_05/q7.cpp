#include<iostream>
using namespace std;

class Hen{
	int x;
	public:
	Hen(int x);
	~Hen();
	class Nest;
	class Egg;
	void display();
	void display_nest(Nest* n);
//	void display_egg(Egg* e);
	class Nest{
		int y;
		public:
		Nest(int y);
		~Nest();
		friend  class Hen;
		class Egg;
		void display_egg(Egg* e);
		class Egg{
			int z;
			public:
			Egg(int z);
			~Egg();
			friend class Hen;
			friend class Hen::Nest;
			void display();
		};
	};
};

Hen::Hen(int x)
{
	this->x = x;
}

Hen::~Hen()
{
	cout << "hen destructor..." << endl;
}

Hen::Nest::Nest(int y)
{
	this->y = y;
}

Hen::Nest::~Nest()
{
	cout << "nest destructor..." << endl;
}

Hen::Nest::Egg::Egg(int z)
{
	this->z = z;
}

Hen::Nest::Egg::~Egg()
{
	cout <<"egg destructor..." << endl;
}

void Hen::display()
{
	cout << "Hen-x : " << x << endl;
}

void Hen::display_nest(Nest* n)
{
	cout << "Hen-Nest-y: " << n->y << endl;
}

/*void Hen::display_egg(Nest::Egg* e)
{
	cout << "Hen-egg-z: " << e->z << endl;
}
*/

void Hen::Nest::display_egg(Egg* e)
{
	cout << "Hen-nest-egg-z: " << e->z << endl;
}

/*void Hen::Nest::display_egg(Egg* e)
{
	cout << "hen-nest-egg-z: " << e->z << endl;
}
*/
void Hen::Nest::Egg::display()
{
	cout << "egg-z: " << z << endl;
}

int main()
{
	Hen h(1);
	Hen::Nest n(2);	
	Hen::Nest::Egg e(3);
	h.display();
	h.display_nest(&n);
	n.display_egg(&e);
	
}
