#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

void GetMemory(char *p, int num)
{
	p = (char *)malloc(sizeof(char) * num);
	//Error
	//p is str's copy
	//p changed but str not
	//so str still equals NULL
}

void GetMemory2(char **p, int num)
{
	*p = (char *)malloc(sizeof(char) * num);
}

int main()
{
	char *str = NULL;
	//GetMemory(str, 100);
	GetMemory2(&str, 100);
	strcpy(str, "hello");
	cout << *str << endl;
	cout << str << endl;
	cout << &str << endl;
	return 0;
}
