#include <string>

template<typename T>
struct Nec {
	T val;
};

Nec(const char*)->Nec<std::string>; // map Nec<> for string literals to Nec<std::string>

int main()
{
	Nec n1{ "necati" }; //Nec<std::string> n1{"necati"}
	Nec n2 = { "necati" }; //Nec<std::string> n2{"necati"}
	Nec n3 = Nec{ "necati" }; //Nec<std::string> n3{Nec<std::string>{"necati"}}
	//Nec s4 = "necati"; // geçersiz aggreagate initialization
}
