#include <vector>

template <typename T>
using veciter = typename std::vector<T>::iterator;
//using veciter = std::vector<T>::iterator; //C++20

int main()
{
	veciter<int> iter;
	//...
}
