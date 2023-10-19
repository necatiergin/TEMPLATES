#include <iterator>

template <typename  InIter>
auto Distance(InIter beg, InIter end, std::input_iterator_tag)
{
	typename std::iterator_traits<InIter>::difference_type result{ 0 };
	
	while (beg != end)
		++beg, ++result;
	
	return result;
}

template <typename RanIter>
auto Distance(RanIter beg, RanIter end, std::random_access_iterator_tag)
{
	return end - beg;
}

template <typename Iter>
auto Distance(Iter beg, Iter end)
{
	return Distance(beg, end, typename std::iterator_traits<Iter>::iterator_category{});
}
