#include <type_traits>

template <typename T>
void foo(T t)
{
    //static_assert(std::is_integral<T>(), "T must be integral");
    //static_assert(std::is_integral<T>::value, "T must be integral");
    static_assert(std::is_integral_v<T>, "T must be integral");
}

int main()
{
    //foo(10);
    foo(4.5);
}
