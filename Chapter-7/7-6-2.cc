#include <iostream>
#include <memory>
using namespace std;

class normal_pointer_example
{
public:
	normal_pointer_example() { cout << "Constructed!\n" << endl; }
	~normal_pointer_example() { cout << "Released!\n" << endl; }
};

class normal_pointer_wrong{};
bool quit;
void quit_func()
{
	if(quit == true)
		cout << "quit_func ok!" << endl;
	throw normal_pointer_wrong();
}

int main()
{
	try
	{
		auto_ptr<normal_pointer_example> Apointer (new normal_pointer_example);
		quit = true;
		quit_func();
	}
	catch(normal_pointer_wrong)
	{
		cout << "normal_pointer_wrong!" << endl;
	}
	return 0;
}
