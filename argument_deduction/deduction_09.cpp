#include <type_traits>
#include <iostream>


template <typename T>
void func(T x, std::type_identity_t<T>);

int main()
{
	func(12, 'A'); // func<int, int>
}
