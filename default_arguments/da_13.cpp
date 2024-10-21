// from cppreference.com
//Member access for the names used in a default template parameter is checked at the declaration, not at the point of use :

class B {};

template<typename T>
class C
{
protected:
    typedef T TT;
};

template<typename U, typename V = typename U::TT>
class D : public U {};

D<C<B>>* d; // error: C::TT is protected
