#include <vector>

template<typename T, unsigned N>
T* Begin(T(&array)[N])
{
	return array;
}

template<typename Container>
typename Container::iterator Begin(Container& c)
{
	return c.begin();
}

int main()
{
	std::vector<int> vec;
	int ar[10]{};
	Begin(vec); 
	Begin(ar); 
}
