template<typename T>
class Nec {
	template<typename U>
	friend class A;
private:
	void foo() {}
};

template <typename T>
class A {
public:
	template <typename U>
	void afunc(Nec<U> nec)
	{
		nec.foo();
	}
};

int main()
{
	A<int> ax;
	Nec<double> dnec;

	ax.afunc(dnec);
}
