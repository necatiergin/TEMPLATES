// ===== file.hpp:
template <typename T> 
void foo(); // only declaration: prevents instantiation

// ===== file.tpp:
//#include "file.hpp"
template<typename T> 
void foo() //definition
{
	// implementation
}

// ===== file.cpp:
//#include "file.tpp"
template void foo<int>(); // manual instantiation
