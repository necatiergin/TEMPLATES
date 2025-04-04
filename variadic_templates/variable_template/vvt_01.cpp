template<typename... Args>
constexpr bool tflags = true;

int main()
{
	static_assert(tflags<>);
	static_assert(tflags<int>);
	static_assert(tflags<int, double>);
	static_assert(tflags<int, int, int>);
}
