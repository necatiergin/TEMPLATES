#include <tuple>
#include <type_traits>

template <typename... Ts>
using DecayedTuple = std::tuple<std::decay_t<Ts>...>;

DecayedTuple<
    const int&,
    double[5],
    void(int)
> x;

int main()
{
    static_assert(
        std::is_same_v<
        DecayedTuple<const int&, double[5], void(int)>,
        std::tuple<int, double*, void(*)(int)>
        >
        );
}
