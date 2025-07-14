#include <array>
#include <type_traits>

template <typename ...Ts>
constexpr std::array<std::common_type_t<Ts...>, sizeof...(Ts)> 
make_array(Ts ...args) 
{
    return { args... };
}

int main()
{
    auto ar = make_array(1, 3, 7);
}
