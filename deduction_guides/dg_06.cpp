#include <string>

template<typename T>
struct Nec {
	T val;
};


explicit Nec(const char*)->Nec<std::string>;

int main()
{
	//Nec n1 = { "neco" };	// invalid, deduction guide ignored
	Nec n2{ "neco" }; // Nec<std::string> n2{"neco"};
	Nec n3 = Nec{ "hello" }; // valid
	Nec n4 = { Nec{"hello"} }; // valid
}
