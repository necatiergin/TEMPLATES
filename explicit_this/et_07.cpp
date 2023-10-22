struct Nec {
	//void f1()&;
	void f1(this Nec&);
	//void f2() const&;
	void f2(this const Nec&);
	//void f3()&&;
	void f3(this Nec&&);
	//void f4()const&&;
	void f3(this const Nec&&);
};

