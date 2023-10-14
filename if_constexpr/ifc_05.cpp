#include <iterator>
#include <iostream>

//implementation for random access iterators
template <typename Iter, typename Dist>
void Advance_impl(Iter& pos, Dist n, std::random_access_iterator_tag)
{
	//std::cout << "random access iterator\n";
	pos += n;
}

//implementation for random bidirectional iterators
template <typename Iter, typename Dist>
void Advance_impl(Iter& pos, Dist n, std::bidirectional_iterator_tag)
{
	std::cout << "bidirectional iterator\n";
	if (n >= 0) {
		while (n--)
			++pos;
	}
	else {
		while (n--)
			--pos;
	}
}

//implementation for input iterators
template <typename Iter, typename Dist>
void Advance_impl(Iter& pos, Dist n, std::input_iterator_tag)
{
	//std::cout << "input iterator\n";

	while (n--) {
		++pos;
	}
}

template <typename Iter, typename Dist>
void Advance(Iter& pos, Dist n)
{
	using Cat = typename std::iterator_traits<Iter>::iterator_category;
	Advance_impl(pos, n, Cat{});
}

#include <vector>
#include <list>

int main()
{
	using namespace std;
	vector<int> ivec{ 1, 2, 3 ,4, 5 };
	auto veciter = ivec.begin();
	Advance(veciter, 3);
	std::cout << *veciter << '\n';

	list<int> ilist{ 1, 2, 3, 4, 5 };
	auto listiter = ilist.begin();
	Advance(listiter, 4);
	std::cout << *listiter << '\n';
}
