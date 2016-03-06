#include <iostream>
using namespace std;

class my
{
public:
	void fun() { cout << "my" << endl; }
	inline ~my() { cout << "inline destructor" << endl;}
};

int main()
{
	my *m = new my();
	m->fun();
	delete m;
	return 0;
}

