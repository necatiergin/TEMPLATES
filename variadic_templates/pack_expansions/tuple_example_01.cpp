#include <tuple>
#include <typeinfo>
#include <iostream>

template<typename... Args>
auto make_args_tuple(Args... args) 
{
    return std::tuple<Args...>(args...); 
}

int main()
{
    auto tp = make_args_tuple(1, 3, 5.6);
    
    std::cout << typeid(tp).name() << '\n';
    std::cout << get<0>(tp) << '\n';
    std::cout << get<1>(tp) << '\n';
    std::cout << get<2>(tp) << '\n';
}
