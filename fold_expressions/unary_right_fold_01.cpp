// ellipsis paketin sağında 
// unary right fold
// operator +

#include <utility>
#include <iostream>

template<typename ...Args>
auto sum(Args&& ...args)
{
	return (std::forward<Args>(args) + ...);
}


int main()
{
	std::cout << sum(12, 4.5, 50L) << "\n"; // 12 + (4.5 + 50L)
}
