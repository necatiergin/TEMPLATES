#include <functional>

template<typename T>
void hashCombine(std::size_t& seed, const T& val)
{
	seed ^= std::hash<T>()(val) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
}

template<typename... Types>
std::size_t combinedHashValue(const Types&... args)
{
	std::size_t seed = 0; // initial seed
	(..., hashCombine(seed, args)); // chain of hashCombine() calls
	return seed;
}
