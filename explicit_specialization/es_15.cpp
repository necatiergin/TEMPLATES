#include<cstddef>

class X{};
class Y{};
class Z{};

template <typename T>
struct Nec;

template <>
struct Nec<X> {
	constexpr static std::size_t value = 1;
};


template <>
struct Nec<Y> {
	constexpr static std::size_t value = 2;
};

template <>
struct Nec<Z> {
	constexpr static std::size_t value = 3;
};


template <typename T>
constexpr std::size_t Nec_v = Nec<T>::value;

int main()
{
	constexpr auto val_1 = Nec_v<X>;  	//1u
	constexpr auto val_2 = Nec_v<Y>;  	//2u
	constexpr auto val_3 = Nec_v<Z>;    //3u 
}
