#include <iostream>


template<typename T, unsigned N>
std::size_t len(T(&)[N])
{
	return N;
}

template<typename T>
typename T::size_type len(T const& t)
{
	return t.size();
}

int main()
{
	int a[10]{};
	std::cout << len(a); 
	std::cout << len("tmp"); 
	int* p{};
	//std::cout << len(p); //gecersiz

	std::allocator<int> x;
	std::cout << len(x); //gecersiz

}
