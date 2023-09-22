#include <tuple>
#include <iostream>

template <typename T>
void print_type(const T&)
{
    std::cout << typeid(T).name() << '\n';
}


template<class A, class B, class... TS>
void func(A arg1, B arg2, TS ...pack)
{
    std::tuple<A, B, TS...> t1;  // std::tuple<A, B, E1, E2, E3> 

    print_type(t1);
    std::tuple<TS..., A, B> t2;  // std::tuple<E1, E2, E3, A, B> 
    print_type(t2);
    std::tuple<A, TS..., B> t3;  // std::tuple<A, E1, E2, E3, B> 
    print_type(t3);
    //...
}

int main()
{
    func(1, 1.2f, 3.4, 4L, 'A');
}
