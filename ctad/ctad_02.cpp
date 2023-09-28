template <typename T = double>
struct Nec {
	T mval;
	Nec() : mval() {}
	Nec(T val) : mval(val) {}
	// ...
};

Nec nec1{ 10 }; // Nec<int>
Nec nec2;      // Nec<double>
