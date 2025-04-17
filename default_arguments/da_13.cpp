#include <memory>

template <typename T = int, typename ...Args>
std::unique_ptr<T> MakeUnique(Args &&...args)
{
	return std::make_unique<T>(std::forward<Args>(args)...);
}

int main()
{
	auto uptr = MakeUnique(10);
}
