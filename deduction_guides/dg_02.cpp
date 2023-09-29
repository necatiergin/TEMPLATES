template<typename T>
class Nec {
public:
	Nec(T param) : mx(param) { }
private:
	T mx;
};

template<typename T> 
Nec(T) -> Nec<T>; // deduction guide

Nec x{5 }; // Nec<int> x{5};
Nec y(3.3); // Nec<double> y(3.3);
auto z = Nec{ 4L}; // auto z = Nec<long> {4L};
//Nec* p = &x; //gecersiz
//Nec n1{ 'A' }, n2{ 23 }; //gecersiz
