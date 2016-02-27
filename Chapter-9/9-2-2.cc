#include <iostream>
using namespace std;

template<typename T>
const T* My_find(T *array, T n, T x)
{
	const T *p = array;
	int i;
	for(i=0; i<n; ++i)
	{
		if(*p == x)
			return p;
		++p;
	}
	return 0;
}

int main()
{
	int a[5]={1,2,3,4,5};
	double d[6]={1.0,2.0,3.0,4.0,5.0,6.0};
	cout << *My_find(a, 5, 3) << endl;
	cout << *My_find(d, 6.0, 4.0) << endl;

	return 0;
}
