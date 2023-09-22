#include <array>

template <typename T, typename U>
void foo(std::array<T, sizeof(U)>, std::array<U, sizeof(T)>);

int main()
{
    std::array<int, 8> a;
    std::array<double, 4> b;
    std::array<double, 5> c;

    foo(a, b);
    foo(a, c); //gecersiz
}
