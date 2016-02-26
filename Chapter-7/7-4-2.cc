#include <iostream>
using namespace std;

int main()
{
	static int a[2] = {1,2};
	int *ptr[5];
	int p=5, p2=6, *page, *page2;
	//Test 2D Array
	int Test[2][3] = {{1,2,3}, {4,5,6}};
	//Test 1D Array
	int Test2[3] = {1,2,3};

	page = &p;
	page2 = &p2;
	ptr[0] = &p;
	ptr[1] = page2;

	//Array Pointer
	int (*A)[3], (*B)[3];
	A = &Test[1];
	B = &Test2;

	cout << *ptr[0] << endl;
	cout << *page << endl;
	cout << *ptr[1] << endl;

	cout << (*A)[0] << (*A)[1] << (*A)[2] << (*A)[3] << endl;
	cout << (*B)[0] << (*B)[1] << (*B)[2] << (*B)[3] << endl;
	return 0;
}
