#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class A
{
public:
	A() { m_a = 1; m_b = 2; }
	~A() {};
	void fun() { printf("%d%d\n", m_a, m_b); }
public:
	int m_a;
	int m_b;
};

class B
{
public:
	B() { m_c = 3; }
	~B();
	void fun() { printf("%d\n", m_c); }
public:
	int m_c;
};

int main()
{
	A a;
	B *pb = (B *)(&a);
	cout << &a << endl;
	cout << &(a.m_a) << endl;
	printf("%p\n", &A::m_a);
	printf("%p\n", &A::m_b);
	printf("%p\n", &B::m_c);
	pb->fun();
	return 0;
}
