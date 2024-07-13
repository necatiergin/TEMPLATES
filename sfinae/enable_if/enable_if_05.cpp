#include <iterator>
#include <type_traits>
#include <list>

template <typename T>
using isBidirIter = std::enable_if_t<std::is_same_v<typename T::iterator_category, std::bidirectional_iterator_tag>>;

template <typename Iter, typename = isBidirIter<Iter>>
void Advance(Iter& iter, int n)
{
	while (n--)
		++iter;
}


int main()
{
	using namespace std;
	list<int> ilist(10);

	auto iter = ilist.begin();
	Advance(iter, 5);
}
