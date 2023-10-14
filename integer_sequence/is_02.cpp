#include <utility>
#include <iostream>

template<typename T, T... ints>
void print_seq(std::integer_sequence<T, ints...> seq)
{
    std::cout << "The sequence of size " << seq.size() << ": ";
    ((std::cout << ints << ' '), ...);
    std::cout << '\n';
}

int main()
{
    print_seq(std::index_sequence<2u, 3u, 5u, 7u, 11u>{});
    print_seq(std::make_integer_sequence<int, 20>{});
    print_seq(std::make_index_sequence<10u>{});
    print_seq(std::index_sequence_for<char, short, int, long>{});
}
