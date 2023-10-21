#include <vector>

template < typename T>
void foo(std::vector<T>, T);

int main()
{
	std::vector<int> ivec{};
	foo(ivec, 5); //no problem
}
