#include <string>

template <typename T, typename U>
auto sum(const T& t, const U& u)
{
	return t + u;
}

int main()
{
	auto x = sum(10, 3.4); // double x;
	auto y = sum('A', 'B');//int y
	auto z = sum(std::string{ "necati" }, "ergin");	//std::string z
}
