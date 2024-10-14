int* (*foo1())(int*, int*);

using fptr = int* (*)(int*, int*);
fptr foo2();

auto foo3() -> int* (*)(int*, int*);
