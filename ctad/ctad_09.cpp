#include <functional>

int foo(int);
double bar(double, double);

struct Functor {
	void operator()(int);
};

int main()
{
	std::function f1{ foo };
	std::function f2{ &foo };
	std::function f3{ bar };
	std::function f4{ Functor{} };
	std::function f5{ [](int x, int y) {return x + y; } };
}
