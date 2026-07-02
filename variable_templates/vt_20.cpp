template<typename T>
constexpr bool is_pointer = false;

template<typename T>
constexpr bool is_pointer<T*> = true;

int main()
{
	static_assert(!is_pointer<int>);
	static_assert(is_pointer<int*>);
}
