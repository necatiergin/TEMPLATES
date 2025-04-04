#include <type_traits>

template<typename Head, typename... Tail>
struct FirstType {
    using type = Head;
};

static_assert(std::is_same_v<FirstType<int, double, char>::type, int>);
