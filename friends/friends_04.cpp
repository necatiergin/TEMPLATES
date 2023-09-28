//gfunc işlevi A sınıfının tüm açılımlarının (specialization) private bölümüne erişebilir

template <typename T>
class A {
	friend int gfunc();
	void foo(); //private
};


int gfunc()
{
	A<int> ax;
	A<double> bx;
	A<char> cx;

	ax.foo();
	bx.foo();
	cx.foo();
}
