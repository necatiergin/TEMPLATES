#include <iostream>
#include <type_traits>

struct A {
    int foo() 
    {
        return 1;
    }
};

struct B {

};


template <typename T>
struct has_foo {
private:
    template <typename U>
    static auto test(U* u) -> decltype(u->foo(), std::true_type{});

    static auto test(...)->std::false_type;

public:
    static constexpr bool value = decltype(test((T*)nullptr))::value;
};

template <typename T>
constexpr bool has_foo_v = has_foo<T>::value;

int main() 
{
    constexpr auto b1 = has_foo_v<A>;
    constexpr auto b2 = has_foo_v<B>;
    std::cout << std::boolalpha;

    std::cout << "b1 = " << b1 << "\n";
    std::cout << "b2 = " << b2 << "\n";
}
