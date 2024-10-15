#include <utility>

template <typename T>
void Swap(T& x, T& y)
{
	T tmp{ std::move(x) };
	x = std::move(y);
	y = std::move(tmp);
}
