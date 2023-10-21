#include <string>
#include <vector>

class Nec {
public:
    template <std::size_t N>
    auto get() {
        if      constexpr (N == 0) return ival;
        else if constexpr (N == 1) return dval;
        else if constexpr (N == 2) return name;
        else if constexpr (N == 3) return ivec;
    }

private: 
    int ival;
    double b;
    std::string name;
    std::vector<int> ivec;
};

