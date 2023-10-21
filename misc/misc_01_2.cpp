#include <vector>
#include <string>

template < typename T>
void foo(std::vector<T>, T);

int main()
{
	std::vector<std::string> svec{};
	foo(svec, "necati"); //error
}
