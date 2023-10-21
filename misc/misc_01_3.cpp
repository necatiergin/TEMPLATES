#include <vector>
#include <string>

template <typename T>
struct type_identity {
	using type = T;
};

template <typename T>
using type_identity_t = type_identity<T>::type;

template <typename T>
void foo(std::vector<T>, type_identity_t<T>);


int main()
{
	std::vector<std::string> svec{};
	foo(svec, "necati"); //valid
}
