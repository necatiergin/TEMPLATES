#include <functional>

template<typename R, typename... Args>
using Func = std::function<R(Args...)>;

Func<void, int, double> f;  // std::function<void(int, double)>
