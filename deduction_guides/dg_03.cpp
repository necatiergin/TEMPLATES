#include <type_traits>
#include <iostream>
#include <string>

template <typename T>
struct Sum {
	T value;
	template <typename ... Types>
	Sum(Types&& ... values) : value{ (values + ...) } {}
};

template <typename ... Types>
Sum(Types&& ... ts)->Sum<std::common_type_t<Types...>>;

int main()
{
	Sum s{ 1u, 2.0, 3, 4.0f };
	Sum strsum{ std::string{"abc"}, "def" };
	std::cout << s.value << '\n'
		<< strsum.value << '\n';
}
