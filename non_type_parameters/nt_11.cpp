template <auto x, auto y>
struct Sum {
	auto static constexpr value = x + y;
};

int main()
{
	constexpr auto x = Sum<12, 4L>::value;
	constexpr auto y = Sum<5, 6U>::value;
}
