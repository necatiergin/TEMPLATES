#include <iostream>

template<typename T>
class Nec {
	template<typename U>
	friend class A;
private:
	void foo() {}
};

template <typename T>
class A {
public:
	template <typename U>
	void afunc(Nec<U> nec)
	{
		std::cout << typeid(*this).name() << '\n';
		std::cout << typeid(decltype(nec)).name() << '\n';
		std::cout << "--------------------------------------\n";
		nec.foo(); //private member
	}
};

int main()
{
	A<int> a1;
	A<double> a2;
	
	Nec<char> nec1;
	Nec<float> nec2;

	a1.afunc(nec1);
	a1.afunc(nec2);
	a2.afunc(nec1);
	a2.afunc(nec2);
}
