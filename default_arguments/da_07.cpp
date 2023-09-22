#include <vector>
#include <algorithm>
#include <functional>
#include <string>
#include <iostream>


template <typename T, typename P = std::less<T>>
auto insert_sorted(std::vector<T>& vec, T&& val, P pred = P{})
{
	return vec.insert(std::lower_bound(vec.begin(), vec.end(), std::forward<T>(val), pred), val);
}

int main()
{
	using namespace std;

	vector<string> svec{ "deniz", "fuat" ,"ayse", "ziya" };

	sort(svec.begin(), svec.end(), greater{});

	insert_sorted(svec, "muhittin"s, greater{});
	
	for (const auto& s : svec) {
		std::cout << s << '\n';
	}
}
