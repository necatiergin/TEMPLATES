#include <utility>
#include <iostream>

template<typename T, T... Ints>
void print_sequence(std::integer_sequence<T, Ints...> int_seq)
{
    std::cout << "The size of the sequence is " << int_seq.size() << ": ";
    ((std::cout << Ints << ' '), ...);
    std::cout << '\n';
}

int main()
{
    using namespace std;

    print_sequence(integer_sequence<int, 2, 4, 6, 8>{});
    print_sequence(make_integer_sequence<int, 10>{});
    print_sequence(make_index_sequence<5>{});
}
