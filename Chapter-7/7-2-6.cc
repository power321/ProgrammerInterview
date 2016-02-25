#include <iostream>
using namespace std;

int main()
{
	int *ptr;
	ptr = (int *)0x8000;
	*ptr = 0xaabb;
	cout << *ptr << endl;
	return 0;
}
