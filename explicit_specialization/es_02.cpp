template <typename T>
struct Myclass {
	void f1();
	void f2();
};

//different interfaces
template <>
struct Myclass<int> {
	void g1();
	void g2();
};
