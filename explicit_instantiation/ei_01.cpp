
//nec.h
namespace ns
{
	template <typename T>
	class Nec
	{
		//...;
	};
	template class Nec<int>; 
}

// client.cpp
// #include "nec.h"

template class ns::Nec<char>; // [2]

int main()
{

}
