#include <cstddef>

template <typename T, std::size_t size>
struct Array {

	//...
	static_assert(size >= 10, "size must be geater than 10");
	T a[size];
};


int main()
{
	Array<int, 5> ar;
}
