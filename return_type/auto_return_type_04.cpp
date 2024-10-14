#include <string>

template <typename T, typename U>
auto getmax(T x, U y)
{
	return y < x ? x : y;
}

int main()
{
	int x = 10;
	double d = 4.2;
	std::string s{ "necati" };

	auto res1 = getmax(x, d);
	auto res2 = getmax(x, 50);
	auto res3 = getmax(s, "ergin");
	auto res4 = getmax<double>(x, 24.5);
}
