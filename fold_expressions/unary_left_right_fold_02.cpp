#include <vector>

// bu örnekte unary right fold olması ile unary left fold olması sonuç açısından bir fark oluturmuyor

//unary right fold
template<typename T, typename... Args>
void pushback_left(std::vector<T>&v, Args&& ...args)
{
	(v.push_back(std::forward<Args>(args)), ...);
}

//unary left fold
template<typename T, typename... Args>
void pushback_right(std::vector<T>& v, Args&& ...args)
{
	(... , v.push_back(std::forward<Args>(args)));
}

#include <iostream>

int main()
{
	std::vector<int> vec;
	//pushback_left(vec, 2, 3, 5, 7, 11, 13);
	pushback_right(vec, 2, 3, 5, 7, 11, 13);

	for (auto i : vec)
		std::cout << i << "\n";
}
