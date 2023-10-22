#include <iostream>

int main()
{
    auto gcd = [](this auto self, int a, int b) -> int{
        return b == 0 ? a : self(b, a % b);
        };

    std::cout << gcd(12, 40) << '\n';
}
