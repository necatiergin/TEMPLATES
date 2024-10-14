template <typename T>
struct Myclass {
	void f1();
	void f2();
};

//explicit specialization may have a different interface
template <>
struct Myclass<int> {
	void g1();
	void g2();
};
