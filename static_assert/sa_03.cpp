#include <type_traits>

template <typename T>
void Swap(T& x, T& y) noexcept
{
    static_assert(std::is_copy_constructible_v<T>, "Swap template argument must be copy_constructible");
    static_assert(std::is_copy_assignable_v<T>, "Swap template argument must be copy_assignible");
    static_assert(std::is_nothrow_copy_constructible_v<T> && std::is_nothrow_copy_assignable_v<T>, "Swap requires nothrow copy/assign");
    auto t = x;
    x = y;
    y = t;
}

struct Nec
{
    Nec() = default;
    Nec(const Nec&) = delete;
    Nec& operator=(const Nec&) = delete;
};


int main()
{
    int a, b;
    Swap(a, b);
    Nec nec_x, nec_y;
    Swap(nec_x, nec_y);
}
