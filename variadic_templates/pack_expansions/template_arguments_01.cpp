#include <typeinfo>
#include <iostream>

template<typename... Types>
struct TypeList{
    //...
};

template<typename... Args>
struct Wrapper {
    using types = TypeList<Args...>;  
};

int main()
{
    std::cout << typeid(Wrapper<int, long, char>::types).name();
    static_assert(std::is_same_v<Wrapper<int, char, float>::types, TypeList<int, char, float>>);
}


