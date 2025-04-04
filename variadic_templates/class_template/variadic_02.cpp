#include <iostream>

template <typename ...Args>
class Myclass {
public:
	constexpr static size_t size = sizeof...(Args);
};

int main()
{
	int a[Myclass<int, int, int>::size];
}
