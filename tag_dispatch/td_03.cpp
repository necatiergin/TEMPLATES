#include <type_traits>

template<typename T>
T abs_impl(T x, std::false_type) 
{
    return (x < 0) ? -x : x;
}

template<typename T>
T abs_impl(T x, std::true_type) 
{
    return x;
}

template<typename T>
T abs_value(T x) 
{
    return abs_impl(x, std::is_unsigned<T>{});
}

