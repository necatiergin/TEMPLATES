#include <concepts>
#include <iostream>

int square(int x)
{
	return x * x;
}

template <int N>
void print_int_array(int(&ar)[N])
{
	for (int i : ar)
		std::cout << i << ' ';
	std::cout << '\n';
}

void foo(std::same_as<int> auto ...args)
{
	int a1[] = { args... };
	print_int_array(a1);
	int a2[] = { args... , 0 };
	print_int_array(a2);
	int a3[sizeof...(args) + 2] = {-1, args... , -1};
	print_int_array(a3);
	int a4[] = { square(args)...};
	print_int_array(a4);
}

int main()
{
	foo(1, 3, 5, 7);
}
