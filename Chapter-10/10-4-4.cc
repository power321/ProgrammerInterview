#include <iostream>
using namespace std;

class A
{
public:
	void foo() { cout << "A"; }
	~A();
};
inline A::~A() { cout << "inline"; }

int main()
{
	A *a = new A();
	a->foo();
	delete a;
	return 0;
}
