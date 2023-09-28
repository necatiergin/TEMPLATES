#include <vector>

template<typename... Args>
auto make_vector(const Args&... elems) {
	return std::vector{ elems... };
}

int main()
{
	std::vector<int> v{ 1, 2, 3 };
	auto x1 = make_vector(v, v); // vector<vector<int>>
	auto x2 = make_vector(v); // vector<int> or vector<vector<int>> ?
}

//Currently, different compilers handle this differentlyand the issue is under discussion.
