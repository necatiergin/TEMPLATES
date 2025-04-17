#include <iostream>

template <typename T, typename U>
class Nec {

};

template <typename T, typename U>
class Erg {

};

template <typename T, typename U, template <typename, typename> typename C = Nec>
class Myclass {
public:
	Myclass()
	{
		std::cout << typeid(C).name() << '\n';
		std::cout << typeid(Myclass).name() << '\n';
		std::cout << typeid(C<int, double>).name() << '\n';
	}
};

int main()
{
	Myclass<int, double> x;
	Myclass<char, long, Erg> y;
}
