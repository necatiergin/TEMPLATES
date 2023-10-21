template <typename T>
struct Nec {
	template <typename U>
	void foo() { }
};


template <typename T>
void func(Nec<T> x)
{
	x.foo<int>(); //error
}


