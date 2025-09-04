#include <tuple>

template <typename ...Ts>
void f(Ts &&...)
{
    //...
}

template <typename Tuple, std::size_t... I>
void process_impl(const Tuple& t, std::index_sequence<I...>)
{
    f(std::get<I>(t)...);
}

template <typename Tuple>
void process(const Tuple& t)
{
    process_impl(t, std::make_index_sequence<std::tuple_size<Tuple>::value>());
}

int main()
{
    process(std::tuple(1, 'A', 2.3));
}
