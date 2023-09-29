template<typename T1, typename T2>
struct Pair {
	T1	first;
	T2	second;
	Pair(const T1& x, const T2& y) : first{ x }, second{ y } {}
};

// deduction guide for the constructor:
template<typename T1, typename T2>
Pair(T1, T2)->Pair<T1, T2>;

int main()
{
	Pair p1(12, 45);  //Pair<int, int>
	Pair p2("ali", "batuhan");  //Pair<const char *, const char *> (deduction guide)
}
