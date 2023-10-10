include <algorithm>
#include <iterator>

template<typename C, typename ...Ts>
auto matches(const C &range, Ts ...ts)
{
	return (std::count(std::begin(range), std::end(range), ts) + ...);
}

#include <vector>
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	vector<int> ivec{23, 4, 78, 12, 9, 2, 13};
	cout << matches(ivec, 4, 2, 13, 45, 120) << "\n";
	cout << matches(ivec, 4, 2, 13, 45, 120) << "\n";
	string str;

	cout << "bir cumle girin: ";
	getline(cin, str);
	cout << matches(str, 'e', 'f', 'i') << "\n";
}
