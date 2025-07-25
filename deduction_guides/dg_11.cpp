// quoted from cppreference.com

#include <vector>

// declaration of the template
template<class T>
struct container
{
    container(T t) {}

    template<class Iter>
    container(Iter beg, Iter end);
};

// additional deduction guide
template<class Iter>
container(Iter b, Iter e) -> container<typename std::iterator_traits<Iter>::value_type>;

// uses
container c(7); // OK: deduces T=int using an implicitly-generated guide
std::vector<double> v = {/* ... */ };
auto d = container(v.begin(), v.end()); // OK: deduces T=double
container e{ 5, 6 }; // Error: there is no std::iterator_traits<int>::value_type
