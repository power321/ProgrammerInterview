#include <iostream>
using namespace std;

char *strA()
{
	char str[] = "hello word";
	return str;
}
int main()
{
	char *ret = strA();
	return 0;
}
