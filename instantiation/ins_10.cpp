//source: C++ templates

class MyInt {
public:
	MyInt(int i);
};

MyInt operator - (MyInt const&);
bool operator > (MyInt const&, MyInt const&);

using Int = MyInt;

template<typename T>
void f(T i)
{
	if (i > 0) {
		g(-i);
	}
} // #1

void g(Int)
{
	// #2
	f<Int>(42); // point of call
	// #3
} // #4
