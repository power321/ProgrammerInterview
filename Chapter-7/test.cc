#include <iostream>
using namespace std;

int main()
{
	char *c = "hello";
	*c = 't';
	char d[] = "hello";
	d[0] = 't';
	return 0;
}
