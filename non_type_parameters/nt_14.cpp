#include <type_traits>

template <double DVAL>
struct Nec {};

int main()
{
	static_assert(std::is_same_v<Nec<0.3>, Nec<0.4 - 0.1>>);
	static_assert(std::is_same_v<Nec<+0.>, Nec<-0.>>);
	static_assert(std::is_same_v<Nec<0.1 + 0.1>, Nec<0.2>>);
}
