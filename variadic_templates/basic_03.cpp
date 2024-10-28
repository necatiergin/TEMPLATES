#include <iostream>

template<class...X, class...Y> 
void foo(X...Arg1, int, int, Y...Arg2)
{
	std::cout << "sizeof X = " << sizeof ...(X) << '\n';
	std::cout << "sizeof Y = " << sizeof ...(Y) << "\n\n";
}

int main()
{
	//X:(int, int, int), Y:(int, int, int, int, int) 
	foo<int, int, int>(0, 1, 2, 3, 4, 5, 6, 7, 8, 9);

	// non trailing parameter pack should be empty
	//X: empty, Y:(int, int, int, int, int)
	foo(0, 5, 1, 2, 3, 4, 5);
}
