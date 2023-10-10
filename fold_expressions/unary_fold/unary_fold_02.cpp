/*
	bu örnek
	unary left fold ile unary right fold arasındaki farkı
	göstermeye yönelik.
*/

#include <utility>
#include <iostream>

template<typename ...Args>
auto fdiv_r(Args && ...args)
{
	return (std::forward<Args>(args) / ...);  //unary right fold
}

template<typename ...Args>
auto fdiv_l(Args && ...args)
{
	return (... / std::forward<Args>(args)); //unary left fold
}

int main()
{
	std::cout << fdiv_r(500, 50, 5, 2) << '\n';
	std::cout << fdiv_l(500, 50, 5, 2) << '\n';
}
