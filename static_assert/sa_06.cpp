#include <type_traits>

template <class T>
struct Nec
{
	static_assert(std::is_default_constructible<T>::value,
		"Template argumani -default constructible- olmali");
};

struct NoDefault {
	NoDefault(int) {}
};

int main()
{
	Nec<int> inec; //sorun yok
	Nec<NoDefault> nd_nec;  //derleme zamani hatasi
}
