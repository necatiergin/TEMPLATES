#include <iostream>
#include <concepts>

constexpr int sum(std::same_as<int> auto... args)
{
	int result{};

	((result += args), ...);
	return result;
}

int main()
{
	constexpr auto x = sum(2, 5, 7, 9, 3);
}
