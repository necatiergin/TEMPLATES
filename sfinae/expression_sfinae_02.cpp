#include <iostream>


template <typename T>
auto func(T t)->decltype(t.f(), void())
{
	std::cout << "has a member function named f\n";
}

template <typename T>
auto func(T t)->decltype(t.g(), void())
{
	std::cout << "has a member function named g\n";
}

struct F {
	void f() {}
};

struct G {
	void g() {}
};

struct S {
};


int main()
{
	func(F{});
	func(G{});
	func(S{}); //invalid
}
