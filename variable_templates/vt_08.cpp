#include <cstddef>

template <size_t VAL>
constexpr size_t set_count= (VAL % 2) + set_count<(VAL / 2)>;

template <> 
constexpr size_t set_count<0> = 0;

constexpr size_t n1 = set_count<15>;
constexpr size_t n2 = set_count<19>;
