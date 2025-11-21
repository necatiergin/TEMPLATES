#include <iostream>

template<class T>
void g(T);

template<class T>
void g(T&);

int main()
{
	int i = 0;
	g(i);
}
