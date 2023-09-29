#include <iostream>

template <int N>
bool is_positive{ N > 0 };

int main()
{
	using namespace std;
	
	std::cout << is_positive<4> << '\n';
	std::cout << is_positive<-5> << '\n';
}
