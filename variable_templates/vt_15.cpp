template<int... Flags>
constexpr int combined_flags = (Flags | ...);

constexpr int READ		= 0x01;
constexpr int WRITE		= 0x02;
constexpr int EXECUTE	= 0x04;

static_assert(combined_flags<READ, WRITE> == (READ | WRITE));
static_assert(combined_flags<READ, WRITE, EXECUTE> == 0x07);
