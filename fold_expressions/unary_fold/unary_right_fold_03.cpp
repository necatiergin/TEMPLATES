#include <utility>

template<typename S, typename ...Args>
bool insert(S &rset, Args &&...args)
{
	return (rset.insert(std::forward<Args>(args)).second && ...);
}

#include <set>
#include <iostream>

int main()
{
	using namespace std;
	set<int> myset{ 34, 56, 98 };

	cout << boolalpha << insert(myset, 10, 20, 30) << "\n";
	cout << boolalpha << insert(myset, 1, 5, 34) << "\n";
}
