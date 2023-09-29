#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>


template<typename T, typename... Args>
void push_back_vec(std::vector<T>& v, Args&&... args) {
    (v.push_back(std::forward<Args>(args)), ...);
}

template<typename T>
void print(const std::vector<T>& v)
{
    if (v.empty())
        return;

    copy(begin(v), prev(end(v)), std::ostream_iterator<T>(std::cout, ", ")); 
    std::cout << v.back();
}

int main()
{
    std::vector<double> v;
    push_back_vec(v, 10.5, 0.7, 1.1, 0.89);
    print(v);
}
