#include <iostream>

template <typename T>
class A {
public:
	void foo()
	{
		static_cast<T*>(this)->f1();
	}
};

template <typename T>
class B {
public:
	void bar()
	{
		static_cast<T*>(this)->f2();
	}
};

class Myclass : public A<Myclass>, public B<Myclass> {
public:
	void f1()
	{
		std::cout << "Myclass::f1()\n";
	}

	void f2()
	{
		std::cout << "Myclass::f2()\n";
	}
};

int main()
{
	Myclass mx;

	mx.bar();
	mx.foo();
}
