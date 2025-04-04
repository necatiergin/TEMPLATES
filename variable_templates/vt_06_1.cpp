template <int N>
constexpr bool is_positive{ N > 0 };

int main()
{
	static_assert(is_positive<10>);
	static_assert(!is_positive<-5>);
}
