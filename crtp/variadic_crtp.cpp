#include <iostream>

template <typename T>
class A {
public:
	void foo()
	{
		std::cout << "foo called\n";
		static_cast<T*>(this)->f1();
	}
};

template <typename T>
class B {
public:
	void bar()
	{
		std::cout << "bar called\n";
		static_cast<T*>(this)->f2();
	}
};

template <template<typename> typename... Skills>
class Myclass : public Skills<Myclass<Skills...>>...
{
public:
	void f1()
	{
		std::cout << "Myclass::f1() called\n";
	}

	void f2()
	{
		std::cout << "Myclass::f2() called\n";
	}
};


int main()
{
	Myclass<A, B> mx;

	mx.bar();
	mx.foo();
}
