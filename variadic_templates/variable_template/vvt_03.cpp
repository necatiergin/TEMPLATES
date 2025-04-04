template<int... Ns>
constexpr bool all_positive = ((Ns > 0) && ...);

int main() 
{
    static_assert(all_positive<1, 2, 3, 4>);   // true
    static_assert(!all_positive<1, -2, 3>);    // false
}
