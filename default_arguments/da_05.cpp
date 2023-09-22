#include <string>
#include <memory>

template <typename Ch, typename Trait = std::char_traits<Ch>, typename Alloc = std::allocator<Ch>>
class BasicString {

};

using String = BasicString<char>;
