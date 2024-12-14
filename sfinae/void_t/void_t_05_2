#include <type_traits>

template <typename C>
concept Container = requires (C c) {
	typename C::size_type;
	typename C::value_type;
	typename C::iterator;
	typename C::const_iterator;
	c.size();
	c.begin();
	c.end();
};

#include <list>

class X {};

static_assert(not Container<X>);
static_assert(Container<std::list<int>>);
