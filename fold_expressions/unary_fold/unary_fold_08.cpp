// ellipsis paketin solunda 
// unary left fold
// operator &&

template<typename... Args>
bool all(Args... args)
{
	return (... && args);
}

#include <iostream>

int main()
{
	std::cout << std::boolalpha;
	std::cout << all(true, true, true, true) << '\n';  // (((true && true) && true) && true) && true
	std::cout << all(true, true, true, false) << '\n'; // (((true && true) && true) && true) && false
}
