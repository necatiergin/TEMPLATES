template<auto Val, typename T = decltype(Val)>
T foo();

int main()
{
	auto x = foo<5>();
	auto y = foo<5.5>();
	auto z = foo<3, double>();
}
