#include <iostream>

template <typename T>
class Nec {

};

template <template <typename> typename Temp>
class Myclass {
public:
	Myclass()
	{
		Temp<int> x;
		Temp<double> y;

		std::cout << typeid(x).name() << "\n";
		std::cout << typeid(y).name() << "\n";
	}
};

int main()
{
	Myclass<Nec> x;
}
