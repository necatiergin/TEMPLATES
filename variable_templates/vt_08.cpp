#include <cstddef>

template <size_t VAL>
constexpr size_t set_bit_count = (VAL % 2) + set_bit_count<(VAL / 2)>;

template <>
constexpr size_t set_bit_count<0> = 0;

static_assert(set_bit_count<15> == 4);
static_assert(set_bit_count<19> == 3);
