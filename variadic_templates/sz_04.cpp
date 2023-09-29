#include <array>

template<typename... Ts>
constexpr auto get_type_sizes()
{
	return std::array<std::size_t, sizeof...(Ts)>{sizeof(Ts)...};
}

int main()
{
	constexpr auto sizes = get_type_sizes<char, short, int, double>();
}
