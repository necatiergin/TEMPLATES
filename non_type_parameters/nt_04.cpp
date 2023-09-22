#include <vector>
#include <algorithm>

template<typename T, int val>
T add_value(T x)
{
	return x + val;
}

int main()
{
	std::vector<int> source(100);
	std::vector<int> dest(100);
	transform(begin(source), end(source), begin(dest), add_value<int, 10>);
	transform(begin(source), end(source), begin(dest), [](int x) {return x + 10; });
}
