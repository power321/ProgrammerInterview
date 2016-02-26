#include <cstdio>
int max(int x, int y)
{
	return x > y ? x : y;
}

int main()
{
	int max(int x, int y);
	int (*p)(int , int) = &max;
	int a, b, c, d;
	scanf("%d%d%d", &a, &b, &c);
	d = (*p)((*p)(a, b), c);
	printf("Among %d, %d, %d, the maximal integer is %d\n", a, b, c,d);
	return 0;
}
