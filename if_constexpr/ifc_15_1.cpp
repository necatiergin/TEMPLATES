#include <string>
#include <vector>

class Nec {
public:
    template <std::size_t N>
    auto get();

private: 
    int ival;
    double dval;
    std::string name;
    std::vector<int> ivec;
};

template <>
auto Nec::get<0>() 
{
    return ival;
}

template <>
auto Nec::get<1>() 
{
    return dval;
}

template <>
auto Nec::get<2>() 
{
    return name;
}

template <>
auto Nec::get<3>() 
{
    return ivec;
}
