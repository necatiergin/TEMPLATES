#include <vector>

template<typename T>
void func(T&& x, const std::vector<T>& ivec);

int main()
{
	using namespace std;

	vector<int> ivec(10);

	func(ivec[0], ivec);
}
