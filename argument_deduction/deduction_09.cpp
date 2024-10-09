#include <array>

template <typename T, typename U>
void foo(std::array<T, sizeof(U)>, std::array<U, sizeof(T)>);

int main()
{
    std::array<int, sizeof(double)> a;
    std::array<double, sizeof(int)> b;
    std::array<double, 5> c;

    foo(a, b); //valid
    foo(a, c); //invalid
}
