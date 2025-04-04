#include <type_traits>

template <typename T, typename... Args>
struct nec {};

template <typename... Args>
using nec_int = nec<int, Args...>;

nec<double, char, int> f1;
nec<int, char, double> f2;
nec_int<char, double> f3;

static_assert(std::is_same_v<decltype(f2), decltype(f3)>);
static_assert(std::is_same_v<nec_int<>, nec<int>>);
