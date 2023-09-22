#include <set>
#include <iostream>

template <typename Value>
using greater_set = std::set<Value, std::greater<Value>>;

int main()
{
	greater_set<int>myset{ 3, 11, 2, 7, 13, 31, 29, 17, 19, 5, 23 };

	for (auto val : myset)
		std::cout << val << ' ';
}
