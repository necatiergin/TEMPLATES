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

void fy()
{
    //...
    tpl_func<int>();
}

/*
> nm - g - C --defined - only * .o

file_x.o:
00000000 W void tpl_func<int>()
00000000 T fx()

file_y.o :
    00000000 W void tpl_func<int>()
    00000000 T fy()
*/
