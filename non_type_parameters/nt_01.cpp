class Myclass {
public:
	double foo(double);
};

int g{};
int foo(int);

template <int x>
class A {};

template <int* p>
class B {};

template <int (*pf)(int)>
class C {};

template <double(Myclass::*)(double)>
class D {};

template <int& x>
class E {

};

int main()
{
	static int ival{ 42 };

	[[maybe_unused]] A<5> ax;
	[[maybe_unused]] B<&g> bx1;
	[[maybe_unused]] B<&ival> bx2;
	[[maybe_unused]] C<foo> cx;
	[[maybe_unused]] D<&Myclass::foo> dx;
	[[maybe_unused]] E<g> ex1;
	[[maybe_unused]] E<ival> ex2;
	//...
}
