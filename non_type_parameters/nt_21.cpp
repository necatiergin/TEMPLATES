template <auto F>
struct ValueWrapper {
    static constexpr auto value = F(42);
};

constexpr auto fl = [](int x) { return x + 1; };

using Wrapped = ValueWrapper<fl>;  // OK in C++20

static_assert(Wrapped::value == 43);
