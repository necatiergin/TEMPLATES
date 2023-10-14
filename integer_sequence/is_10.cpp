#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <string>
#include <utility>

namespace details {
    template <typename T, std::size_t... I>
    auto make_array_impl(const T& val, std::index_sequence<I...>) 
    {
        return std::array<T, sizeof...(I)>{ (I, val)... };
    }
}

template <int N, typename T>
std::array<T, N> make_array(const T& val)
{
    return details::make_array_impl(val, std::make_index_sequence<N>());
}

int main() 
{
    auto ar = make_array<5>(std::string("necati"));
    
    for (const auto& val : ar)
        std::cout << val << ' ';
}
