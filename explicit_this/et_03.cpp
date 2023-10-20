#include <utility>

struct Nec {
    template <class Self>
    void foo(this Self&& self);
};

int main()
{
    Nec nec;
    nec.foo();  //Self = Nec&

    const Nec cnec;
    cnec.foo();  //Self = const Nec&

    std::move(nec).foo();   //Self = Nec
    std::move(cnec).foo(); //Self = const Nec

}

