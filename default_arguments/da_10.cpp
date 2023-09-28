#include <iostream>
#include <string>

template <typename T = int>
T func(T x = {})
{
	return x;
}

int main()
{
	auto i = func(); //func<int>({});
	auto d = func(3.17); //func<double>(3.17);
	auto s = func<std::string>(); //func<std::string>({});
	std::cout << "i = " << i << '\n';
	std::cout << "d = " << d << '\n';
	std::cout << s.length() << '\n';
}
