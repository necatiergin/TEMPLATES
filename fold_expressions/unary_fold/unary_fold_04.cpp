#include <algorithm>
#include <iterator>
#include <vector>
#include <iostream>
#include <string>

template<typename C, typename ...Ts>
auto matches(const C& range, const Ts& ...ts)
{
	return (std::count(std::begin(range), std::end(range), ts) + ...);
}

int main()
{
	using namespace std;

	vector ivec{ 23, 4, 78, 12, 9, 2, 13 };
	cout << matches(ivec, 4, 2, 13, 45, 120) << '\n';
	string str;

	cout << "enter a sentence: ";
	getline(cin, str);
	cout << matches(str, 'e', 'f', 'i') << '\n';
}
