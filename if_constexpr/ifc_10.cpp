#include <iostream>
#include <memory>

template <typename T>
auto getval(T t) 
{
    if constexpr (std::is_pointer_v<T>)
        return *t;
    else
        return t;
}

int main()
{
    int ival{ 87 };
    double dval{ 4.5 };
    int* iptr{ &ival };
    double* dptr{ &dval };

    std::cout << getval(ival) << '\n';
    std::cout << getval(iptr) << '\n';
    std::cout << getval(dval) << '\n';
    std::cout << getval(dptr) << '\n';    
}
