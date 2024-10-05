#include <type_traits>

template < template <typename> typename T1, typename T2>
struct MetaFun {
	using type = typename T1<T2>::type;
};

template < template <typename> class T1, typename T2>
using MFun = typename MetaFun<T1, T2>::type;

MFun<std::remove_reference, int&> i = 3;
