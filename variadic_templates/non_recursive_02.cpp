#include <initializer_list>
#include <iostream>


template <typename ...Args>
void Print(const Args &...args)
{
	(void)std::initializer_list<int>{(std::cout << args << " ", 0)...};
}

int main()
{
	Print(2, 4.5, "ali");
}
