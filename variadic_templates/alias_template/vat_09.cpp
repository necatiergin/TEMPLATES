#include <utility>

template <typename... Ts>
using IndicesFor = std::index_sequence_for<Ts...>;

static_assert(
	std::is_same_v<
	IndicesFor<int, double, long>, std::index_sequence<0, 1, 2>
	>
	);
