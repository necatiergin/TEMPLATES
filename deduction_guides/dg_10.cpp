#include <string>
#include <type_traits>

using namespace std::string_literals;

template < class T>
class Name {
public:
	Name(T first, T last) : m_first(first), m_last(last) {}
private:
	T m_first;
	T m_last;
};

 // deduction guide
 Name(const char*, const char*)->Name<std::string>;

int main() 
{
	Name myname("Necati", "Ergin");
	static_assert(std::is_same_v<decltype(myname), Name<std::string>>);
	Name x("Mehmet"s, "Kurtulus"s);
	static_assert(std::is_same_v<decltype(x), Name<std::string>>);
}
