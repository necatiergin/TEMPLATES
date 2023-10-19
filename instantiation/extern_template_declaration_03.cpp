///////////////////////////////
// tpl_func.h

template<typename T>
void tpl_func()
{
    //...
}

///////////////////////////////
// file_x.cpp

// Bu kod optimizasyon seçeneği (-O2 on gcc or clang) ile derlenirse
// bağlayıcı program tpl_func<int>() fonksiyonunun tanımsız olduğu yönünde bir hata mesajı verebilir.
// 

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
 nm -g -C --defined-only *.o

f1.o:
00000000 T fx()

f2.o:
00000000 T fy()

*/
//tpl_func.h

template<typename T>
void __attribute__ ((noinline)) tpl_func()
{
    // ...
}

/*

    
