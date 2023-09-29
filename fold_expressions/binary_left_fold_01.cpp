#include <iostream>
#include <utility>

//binary left fold

template<typename ...Args>
void fprint(Args&& ...args)
{
	(std::cout << ... << std::forward<Args>(args)) << '\n';
}

#include <string>
#include <bitset>

int main()
{
	std::string name{ "Necati" };
	std::bitset<8> bs{ 15u };

	fprint(name, 12, 4.5, "Tahsin", bs);
}
