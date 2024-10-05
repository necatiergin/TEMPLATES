#include<cstddef>

class X;
class Y;
class Z;

template <typename T>
constexpr std::size_t Nec;

template <>
constexpr std::size_t Nec<X> = 1;

template <>
constexpr std::size_t Nec<Y> = 2;

template <>
constexpr std::size_t Nec<Z> = 3;


int main()
{
	constexpr auto val_1 = Nec<X>;  	//1u
	constexpr auto val_2 = Nec<Y>;  	//2u
	constexpr auto val_3 = Nec<Z>;    //3u 
}
