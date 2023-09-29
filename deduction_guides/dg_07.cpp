template<typename T>
struct Nec
{
	Nec(T) { std::cout << "Nec(T)\n"; }
	
	template<typename U>
	Nec(U) { std::cout << "Nec(U)\n"; }
};

template<typename T>
explicit Nec(T)->Nec<T*>;

int main()
{
	Nec p1{ 42 }; // Nec<int*> deduction guide
	Nec p2 = 42; // Nec<int> constructor
	int i = 42;
	Nec p3{ &i }; // Nec<int**> deduction guide
	Nec p4 = &i; // Nec<int*> constructor
}
