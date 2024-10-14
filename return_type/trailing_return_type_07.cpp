#include <vector>

struct Nec {
	std::vector<int> mvec;

	auto begin() const -> decltype(mvec.begin()) 
	{
		return mvec.begin(); 
	}

	decltype(mvec.end()) end() const 
	{
		return mvec.end();  //error
	}
};
