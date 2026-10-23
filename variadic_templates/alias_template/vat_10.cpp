template <typename... Ts>
using Func = void(Ts...);

Func<int, double, char>* fp;
