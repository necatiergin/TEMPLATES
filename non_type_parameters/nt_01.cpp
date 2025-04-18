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
	[maybe_unused]A<5> ax;
	[maybe_unused]B<&g> bx;
	[maybe_unused]C<foo> cx;
	[maybe_unused]D<&Myclass::foo> dx;
	[maybe_unused]E<g> ex;
	//...
}
