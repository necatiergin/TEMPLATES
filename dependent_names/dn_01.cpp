struct A
{
	using foo = int;
};

struct B
{
	static void foo() { }
};

struct C {
	inline static int foo{};
};

template <typename T>
struct Nec {
	void foo()
	{
		auto x = T::foo; // what does this refer to?
	}
};
