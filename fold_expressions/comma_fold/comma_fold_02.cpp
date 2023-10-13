#include <iostream>

void print(const auto&... args)
{
	((std::cout << args << ' '), ...) << '\n';
}

int main()
{
	print(1, 1.2f, 'A', "necati");
}
