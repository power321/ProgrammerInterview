#include <iostream>
#include <stdlib.h>
using namespace std;

template<typename T>
struct my_container
{
	virtual void push(const T&) = 0; //Pure Virtual
	virtual void pop() = 0;
	virtual const T& begin() = 0;
	virtual const T& end() = 0;
	virtual size_t size() = 0;
};

template<typename T>
struct my_vector : public my_container<T>
{
	static const size_t _step = 100;
	my_vector()
	{
		_size = 0;
		_cap = _step;
		buf = 0;
		re_capacity(_cap);
	}
	~my_vector()
	{
		free(buf);
	}
	void re_capacity(size_t s)
	{
		if(!buf)
			buf = (T*)malloc(sizeof(T) * s);
		else
			buf = (T*)realloc(buf, sizeof(T) * s);
	}
	virtual void push(const T& v)
	{
		if(_size >= _cap)
			re_capacity(_cap += _step);
		buf[_size++] = v;
	}
	virtual void pop()
	{
		if(_size)
			_size--;
	}
	virtual const T& begin()
	{
		return buf[0];
	}
	virtual const T& end()
	{
		if(_size)
			return buf[_size - 1];
	}
	virtual size_t size()
	{
		return _size;
	}
	const T& operator[] (size_t i)
	{
		if(i >= 0 && i < _size)
			return buf[i];
	}
private:
	size_t _size;
	size_t _cap;
	T* buf;
};
int main()
{
	my_vector<int> v;
	for(int i=0; i<100; ++i)
		v.push(i);
	for(int i=0; i<100; ++i)
		cout << v[i] << endl;

	return 0;
}
