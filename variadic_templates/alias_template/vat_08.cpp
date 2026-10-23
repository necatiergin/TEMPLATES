#include <type_traits>

template <typename... Ts>
using AllPointers = std::bool_constant<
    (std::is_pointer_v<Ts> && ...)
>;

static_assert(AllPointers<int*, double*, char*>::value);
static_assert(!AllPointers<int*, double, int*>::value);
