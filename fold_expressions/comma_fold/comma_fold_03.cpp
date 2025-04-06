#include <iostream>
#include <concepts>

void sum(auto& x, std::same_as<int> auto... args)
{
	((x += args), ...);
	
}

int main()
{
	int x{ 100 };

	sum(x, 2, 5, 7, 9, 3);
	std::cout << "x = " << x << '\n';

}
