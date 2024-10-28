#include <type_traits>

template <class T>
struct Nec
{
	static_assert(std::is_default_constructible_v<T>
		"Template argument must be default constructible");
};

struct NoDefault {
	NoDefault(int) {}
};

int main()
{
	Nec<int> inec; //valid
	Nec<NoDefault> nd_nec;  //error
}
