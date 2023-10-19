//////////////////////////////
// tmp_func.h

template<typename T>
void tmp_func()
{
    // ...
}

extern template void tmp_func<int>();


///////////////////////////////
// tmp_func.cpp

//#include "tmp_func.h"

template void tmp_func<int>();

///////////////////////////////
// fx.cpp

//#include "tmp_func.h"

void fx()
{
    //...
    tmp_func<int>();
}

///////////////////////////////
// fy.cpp

//#include "tmp_func.h"

void fy()
{
    // ...
    tmp_func<int>();
}
