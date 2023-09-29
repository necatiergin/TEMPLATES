template <class T>
auto Begin(T& c) -> decltype(c.begin()) 
{
    return c.begin();
}

template <class T, size_t N>
T* Begin(T(&arr)[N]) 
{
    return arr; 
}


#include <vector>

int main()
{

    int ar[10]{};
    std::vector<int> ivec;

    auto p = Begin(ar); 
    auto iter = Begin(ivec); 
}


