//alternative to tag dispatch mechanism

#include <iterator>
#include <type_traits>

template <typename Iter, typename Dist>
void advance(Iter& pos, Dist n)
{
	using cat = typename std::iterator_traits<Iter>::iterator_category;

	if constexpr (std::is_same_v<cat, std::random_access_iterator_tag>) {
		pos += n;
	}
	else if constexpr (std::is_same_v<cat, std::bidirectional_iterator_tag>) {
		if (n >= 0) {
			while (n--)
				++pos;
		}
		else {
			while (n++) {
				--pos;
			}
		}
	}
	else { //input iterator tag
		while (n--)
			++pos;
	}
}
