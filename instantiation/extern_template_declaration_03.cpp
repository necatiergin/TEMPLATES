///////////////////////////////
// tpl_func.h

template<typename T>
void tpl_func()
{
    // body
}

///////////////////////////////
// file_x.cpp

//#include "tpl_func.h"

void fx()
{
    //...
    tpl_func<int>();
}

///////////////////////////////
// file_y.cpp

//#include "tpl_func.h"

extern template void tpl_func<int>();

void fy()
{
    //...
    tpl_func<int>();
}

/*
> nm - g - C --defined - only * .o

fx.o:
00000000 W void tpl_func<int>()
00000000 T fx()

fy.o :
    00000000 T fy()
*/
