#include <iostream>

int main(void)
{
	auto f = [](this auto&& self, int n) {
		if (n == 0)
			return 1;
		return n * self(n - 1);
		};

	std::cout << f(5) << '\n';
}
