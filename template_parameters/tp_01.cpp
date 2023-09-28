#include <vector>
#include <iostream>
#include <list>

//          class       class               class     class    class
template <typename T, typename A, template<typename, typename>typename Con>
void func(const Con<T, A>& con)
{
	std::cout << "T is : " << typeid(T).name() << '\n'; 
	std::cout << "A is : " << typeid(A).name() << '\n';
	std::cout << "Con is : " << typeid(Con).name() << '\n';
}

int main()
{
	std::vector<int> ivec;
	std::list<int> ilist;

	func(ivec);
	func(ilist);
}
