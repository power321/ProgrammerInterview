#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct{
	short a1;
	short a2;
	short a3;
}A;

struct{
	long a1;
	short a2;
}B;

int main()
{
	char* ss1 = "0123456789";
	char ss2[] = "0123456789";
	char ss3[100] = "0123456789";
	int ss4[100];
	char q1[] = "abc";
	char q2[] = "a\n";
	char* q3 = "a\n";
	char *str1 = (char *)malloc(100);
	void *str2 = (void *)malloc(100);
	cout << sizeof(ss1) << " ";
	cout << sizeof(ss2) << " ";
	cout << sizeof(ss3) << " ";
	cout << sizeof(ss4) << " ";
	cout << sizeof(q1) << " ";
	cout << sizeof(q2) << " ";
	cout << sizeof(q3) << " ";
	cout << sizeof(A) << " ";
	cout << sizeof(B) << " ";
	cout << sizeof(str1) << " ";
	cout << sizeof(str2) << " ";
	return 0;
}
