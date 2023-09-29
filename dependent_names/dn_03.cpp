#include <iostream>

struct A
{
	static void foo() 
	{
		std::cout << "A::foo called\n";
	}

	inline static int bar{ 20 };

	using value_type = int;
};

template <typename T>
struct Nec {
	void func()
	{
		T::foo();
		std::cout << T::bar << '\n';
		//T::value_type x{}; //error
		//...
	}
};

int main()
{
	Nec<A> n1;
	n1.func();
}
