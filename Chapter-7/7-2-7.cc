#include <iostream>
#include <stdio.h>
using namespace std;
class A
{
public:
	int _a;
	A()
	{
		_a = 1;
	}
	void print()
	{
		printf("%d", _a);
	}
};

class B : public A
{
public:
	int _a;
	B()
	{
		_a = 2;
	}
};

int main()
{
	B b;
	b.print();
	printf("%d\n", b._a);
	return 0;
}
