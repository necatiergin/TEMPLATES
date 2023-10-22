#include <iostream>

int main(void)
{
	auto factorial = [](this auto&& self, int n) {
		if (n == 0)
			return 1;
		return n * self(n - 1);
		};

	std::cout << factorial(5) << '\n';
}
