class Nec {
	void foo(this Nec& self)
	{
		auto a1 = self.mx; //valid
		//auto a2 = mx; //error
		//auto a3 = this->mx; //error
	}
	int mx{};
};
