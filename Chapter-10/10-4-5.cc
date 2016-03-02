#include <iostream>
#include <string>
using namespace std;

class B
{
private:
	int data;
public:
	B() { cout << "default constructor" << endl; }
	~B() { cout << "destructed" << endl; }
	B(int i) : data(i) { cout << "constructed by para" << data << endl; }
};

B play(B b)
{
	return b;
}

int main()
{
	B temp = play(5);
	return 0;
}
