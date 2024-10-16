#include <iostream>

template<typename T> 
struct Nec 
{
    //member template
    template<typename U>
    struct MT {
        MT()
        {
            std::cout << "primary member template\n";
        }
    };      
    
    template<typename U>
    struct MT<U *> {
        MT()
        {
            std::cout << "partial specialization for member template\n";
        }
    }; 
};

template<>
template<typename>
struct Nec<double>::MT {
    MT()
    {
        std::cout << "full specialization for member template\n";
    }
}; 

int main()
{
    Nec<char>::MT<int*> x;  
    Nec<double>::MT<int*> y; 
    Nec<char>::MT<int> z;    

}
