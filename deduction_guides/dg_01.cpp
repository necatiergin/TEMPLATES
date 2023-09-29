#include <string>
#include <typeinfo>
#include <iostream>

template<typename T>
struct Nec
{
	T str;
};

Nec(const char*)->Nec <std::string>;

int main()
{
	Nec nec{ "Necati Ergin" }; 

	std::cout << std::boolalpha << (typeid(nec) == typeid(Nec<std::string>));
}
