#include <type_traits>

template<typename... Ts>
constexpr bool are_all_int = (std::is_same_v<Ts, int> && ...);

int main() 
{
    static_assert(are_all_int<int, int, int>);       // true
    static_assert(!are_all_int<int, double, int>);   // false
}
