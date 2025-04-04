#include <iostream>

template <typename ...Args>
class Myclass {
public:
	Myclass()
	{
		std::cout << sizeof...(Args) << '\n';
	}
};

int main()
{
	Myclass<int, double, long> x;
	Myclass<int, int, int, int, int> y;
}
