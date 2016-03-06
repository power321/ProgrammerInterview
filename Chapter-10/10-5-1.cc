#include <iostream>
#include <cstring>
using namespace std;

class CExample
{
private:
	int a;
public:
	CExample(int b) { a = b; }
	void Show() { cout << a << endl; }
};

class CA
{
public:
	CA(int n, char *str)
	{
		a = n;
		s_str = new char[n];
		if(s_str != NULL)
			strcpy(s_str, str);
	}
	~CA() { delete s_str; }
	CA(const CA& C)
	{
		a = C.a;
		s_str = new char[a];
		if(s_str != NULL)
			strcpy(s_str, C.s_str);
	}
	void Show()
	{
		cout << a << " " << s_str << endl;
	}

private:
	int a;
	char *s_str;

};

int main()
{
	CExample A(100);
	CExample B = A;
	B.Show();
	CA C(10, "hello");
	CA D = C;
	D.Show();
	return 0;
}
