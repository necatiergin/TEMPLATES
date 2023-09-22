#include <vector>
#include <list>

template <typename T, typename C = std::vector<T>>
class A {
	//...
};

int main()
{
	A<int, std::list<int>> x; 
	A<double> y;  //A<double, std::vector<double>> y;
}
