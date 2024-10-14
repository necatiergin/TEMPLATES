#include <iostream>
#include <string>

int main()
{
	std::string str{ "necati" };
	
	std::cout << "str = " << str << '\n';

	auto f = [&str]()->auto& {str += " ergin";  return str; };

	auto& rs = f();
	rs += " aslan";

	std::cout << "str = " << str << '\n';
}
