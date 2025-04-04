#include <type_traits>

template<bool... Bs>
constexpr bool all_true = (Bs && ...);

static_assert(all_true<> == true); 

template<bool... Bs>
constexpr bool any_true = (Bs || ...);

static_assert(any_true<> == false); 

template<typename... Args>
constexpr bool is_fold_void = std::is_same_v<decltype((..., Args())), void>;

static_assert(is_fold_void<>);
static_assert(!is_fold_void<int, double, char>);
