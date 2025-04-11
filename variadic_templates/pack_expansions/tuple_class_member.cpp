#include <tuple>

template<typename... Types>
struct TupleWrapper {
    std::tuple<Types...> data;
};

int main()
{
    TupleWrapper<int, double, long> x;
}
