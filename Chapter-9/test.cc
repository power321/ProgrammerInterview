#include <iostream>
using namespace std;

template <typename AnyType>
void Swap(AnyType &a, AnyType &b)
{
	AnyType temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a=2, b=3;
	double f1=1.2, f2=2.3;
	cout << "a=" << a << " b=" << b << endl;
	Swap(a,b);
	cout << "a=" << a << " b=" << b << endl;

	cout << "f1=" << f1 << " f2=" << f2 << endl;
	Swap(f1,f2);
	cout << "f1=" << f1 << " f2=" << f2 << endl;
	
	return 0;
}
