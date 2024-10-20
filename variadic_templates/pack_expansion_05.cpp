#include <utility>
#include <iostream>

template <typename ...Ts>
void bar(Ts&& ...args)
{
	int cnt{};

	((std::cout << ++cnt << ". argument is :" << (std::is_lvalue_reference_v<Ts> ? "L value" : "R value") << '\n'), ...);
}


template <typename ...Ts>
void foo(Ts&& ...args)
{
	bar(std::forward<Ts>(args)...);
}

int main()
{
	int x{};

	foo(x, 34, std::move(x));
}
