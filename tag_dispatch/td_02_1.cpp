#include <iterator>

namespace details {
    template <typename Raniter, typename Distance>
    void advance(Raniter& it, Distance n, std::random_access_iterator_tag) 
    {
        it += n;
    }

    template <typename Biditer, typename Distance>
    void advance(Biditer& it, Distance n, std::bidirectional_iterator_tag) 
    {
        if (n > 0) {
            while (n--) ++it;
        }
        else {
            while (n++) --it;
        }
    }

    template <typename Initer, typename Distance>
    void advance(Initer& it, Distance n, std::input_iterator_tag) {
        while (n--) {
            ++it;
        }
    }
}

template <typename Iter, typename Distance>
void advance(Iter& it, Distance n) 
{
    details::advance(it, n,
        typename std::iterator_traits<Iter>::iterator_category{});
}
