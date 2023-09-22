#include <functional>
#include <memory>

template<
    class Key,
    class Compare = std::less<Key>,
    class Allocator = std::allocator<Key>
> class Set;
