struct X {
	void xf();
};

struct Y {
	void yf();
};

struct Z {
	void zf();
};

template <typename... Bases>
struct Der : public Bases...
{
	Der(Bases const & ... args) : Bases(args)...
	{ }
};

int main()
{
	X a;
	Y b;
	Z c;
	Der myder(a, b, c);

	myder.xf();
	myder.yf();
	myder.zf();
}
