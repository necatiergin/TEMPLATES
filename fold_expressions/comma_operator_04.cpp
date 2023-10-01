#include<array>
#include<vector>
#include<iostream>
#include<type_traits>

template<class T>
concept hasIterator = requires (T a) 
{ 
    a.begin(); 
    a.end(); 
};

template<typename T>
void impl(const T& x){
    if constexpr (hasIterator<T>){
        std::cout<<"(";
        for (auto& m: x)
            std::cout<<m<<" ";
        std::cout<<")";
    }
    else if constexpr (std::is_pointer_v<T>)
        std::cout<<*x;
    else
        std::cout<<x;
}

void print(const auto&... args){
   ((impl(args)),...);
}

int main(){
    auto a = std::array<int,3>{9,8,7};
    auto v = std::vector<double>{1.5, 2.0};
    int* p = new int{3};
    print(1,4.5, a,v,p);
    return 0;
}
