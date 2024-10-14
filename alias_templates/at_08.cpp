#include <concepts>
#include <utility>

template <std::integral T>
using ipair = std::pair<T, T>;

ipair<double> dp; //error  - constraint not satisfied
