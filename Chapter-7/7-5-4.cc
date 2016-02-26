#include <iostream>
using namespace std;

int main()
{
	char *a[] = {"hello", "the", "world"};
	char **pa = a;
	cout << *pa << endl;
	pa++;
	cout << *pa << endl;
	return 0;
}
