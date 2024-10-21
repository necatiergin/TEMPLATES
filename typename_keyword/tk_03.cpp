template <typename T>
void func(T)
{
	using value_type = typename T::value_type;
	using vtype = T::value_type; //valid since C++20
}
