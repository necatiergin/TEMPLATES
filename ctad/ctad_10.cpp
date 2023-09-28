#include <complex>

int main()
{
	std::complex c1{ 1.4f, 2.2f }; // std::complex<float>
	std::complex c2(2.8, 6.3); // std::complex<double>
	std::complex c3 = 1.2; // std::complex<double>
	std::complex c4 = { 4.7 }; // std::complex<double>
	//std::complex c5{5,3.3}; // geçersiz

}

/*
namespace std {
	template<typename T>
	class complex {
		constexpr complex(const T& re = T(), const T& im = T());
		//...
	}
};
*/
