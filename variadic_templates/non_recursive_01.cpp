#include <iostream>
#include <string>
#include <sstream>
#include <bitset>

template<typename ...Ts>
std::string serialize(const Ts& ...args)
{
	using expander = int[];

	std::ostringstream os;
	(void)expander{ (os << args << ' ', 0)... };
	return os.str();
}

int main()
{
	std::bitset<16> bs{ 345543u };

	std::cout << serialize(12, "ali", bs, 'A', 2.3);
}
