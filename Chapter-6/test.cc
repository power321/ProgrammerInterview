#include <iostream>
using namespace std;

void func(const int& v1, const int& v2)
{
	cout << v1 << " " << v2 << endl;
}
int main()
{
	int i = 0;
	func(++i, i++);
	return 0;
}
