#include <iostream>

template<typename Ret, typename... Args>
using FnPtr = Ret(*)(Args...);

FnPtr<void, int> fptr = [](int x) { std::cout << x; };
