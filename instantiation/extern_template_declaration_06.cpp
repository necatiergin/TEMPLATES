//////////////////////////////
// tclass.h

template<typename T>
class Tclass
{
    // implementation
};

///////////////////////////////
// fx.cpp

//#include "tclass.h"

void fx()
{
    //...
    Tclass<int> bc;
}

///////////////////////////////
// fy.cpp

//#include "tclass.h"

extern template class Tclass<int>;

void fy()
{
    //...
    Tclass<int> bc;
}
