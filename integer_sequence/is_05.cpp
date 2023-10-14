#include <utility>
#include <type_traits>

int main()
{
	using is = std::index_sequence<3u, 5u, 6u, 9u>;
	constexpr auto b = std::is_same_v<is, std::integer_sequence<std::size_t, 3u, 5u, 6u, 9u>>; //true
}
