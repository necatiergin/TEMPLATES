#include <utility>
#include <type_traits>

int main()
{
	using is = std::integer_sequence<int, 3, 6, 9, 23, 12>;

	constexpr auto sz = is::size(); // 5
	constexpr auto b = std::is_same_v<is::value_type, int>; //true
}
