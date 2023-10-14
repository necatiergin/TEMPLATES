#include <type_traits>
#include <algorithm>

template <typename T, std::size_t N>
void copy_array(T(&dest)[N], const T(&source)[N])
{
	if constexpr (std::is_trivially_copyable_v<T>)
	{
		std::memcpy(dest, source, N * sizeof(T));
	}
	else
	{
		std::copy(source, std::end(source), dest);
	}
}
