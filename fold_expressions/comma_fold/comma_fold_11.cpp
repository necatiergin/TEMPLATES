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
    print_seq(std::integer_sequence<int, 1, 3, 5, 7>{});
    print_seq(std::integer_sequence<char, 'N', 'E', 'C', 'A', 'T', 'I'>{});
}
