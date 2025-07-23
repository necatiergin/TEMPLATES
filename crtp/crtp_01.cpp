#include <iostream>

template <typename Der>
class Base {

public:
	void print_type() const
	{
		std::cout << typeid(*this).name() << '\n';
		std::cout << typeid(Der).name() << '\n';
		std::cout << "--------------------------------------\n";
	}
};

class A : public Base<A> {};
class B : public Base<B> {};
class C : public Base<C> {};


int main()
{
	A ax;
	B bx;
	C cx;

	ax.print_type();
	bx.print_type();
	cx.print_type();
}
