///////////////////////////////
// third_party.h

template<typename T>
void tpl_func()
{
    // ...
}

///////////////////////////////
// tpl_func.h

//#include <third_party.h>

extern template void tpl_func<int>();

///////////////////////////////
// tpl_func.cpp

//#include "tpl_func.h"

template void tpl_func<int>();

///////////////////////////////
// fx.cpp

//#include "tpl_func.h"

void fx()
{
    //...
    tpl_func<int>();
}

///////////////////////////////
// fy.cpp

//#include "tpl_func.h"

void fy()
{
    //...
    tpl_func<int>();
}
