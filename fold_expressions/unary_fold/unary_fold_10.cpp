#include <utility>
#include <set>
#include <iostream>

template<typename S, typename ...Args>
bool insert(S& rset, Args &&...args)
{
	return (rset.insert(std::forward<Args>(args)).second && ...);
}

int main()
{
	std::set myset{ 34, 56, 98 };

	boolalpha(std::cout);

	std::cout << "myset.size() = " << myset.size() << '\n';
	std::cout << insert(myset, 10, 20, 30) << '\n';
	std::cout << "myset.size() = " << myset.size() << '\n';
	std::cout << insert(myset, 5, 30, 34) << '\n';
	std::cout << "myset.size() = " << myset.size() << '\n';
}
