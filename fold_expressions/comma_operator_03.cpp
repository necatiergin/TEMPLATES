#include <iostream>
#include <concepts>

int sum(std::same_as<int> auto... args)
{
	int result{};

	((result += args), ...);
	return result;
}

int main()
{
	std::cout << sum(2, 5, 7, 9, 3);
}
