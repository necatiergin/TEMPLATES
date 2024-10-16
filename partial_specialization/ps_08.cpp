#include <iostream>

template<class T, int N> // primary template
struct Nec
{
    Nec()
    {
        std::cout << "primary template\n";
    }
    void foo(); // member declaration
};

template<class T, int N>
void Nec<T, N>::foo() 
{
    std::cout << "foo impl. for primary template\n";
}     

// partial specialization
template<class T>
struct Nec<T, 5>
{
    Nec()
    {
        std::cout << "partial spec. for Nec<T, 5>\n";
    }
    void foo();
    void bar();
    void baz();
};

template<class T>
void Nec<T, 5>::bar() 
{
    std::cout << "bar member of partial specialization <T, 5>\n";
}

// explicit (full) specialization
// of a member of partial specialization
template<>
void Nec<int, 5>::baz() 
{
    std::cout << "full specialization for the baz member of partial spec. <T, 5>\n";
}

int main()
{
    Nec<int, 0> n1;
    Nec<int, 5> n2;
    n1.foo(); 
    n2.bar(); 
    n2.baz(); 
    //n2.foo(); //link-time error
}
