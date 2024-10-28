#include <type_traits>
#include <string>

static_assert(sizeof(void*) == 4, "32-bits addressing is required!");
static_assert(sizeof(void*) == 8, "64-bits addressing is required!");

template <typename T, int Row, int Col>
struct Matrix {
	static_assert(Row > 0, "row number must be greater than 0");
	static_assert(Col > 0, "column number must be greater than 0");
	static_assert(Row > Col, "row number must be greater than column number!");
	//...
};

int main()
{

	static_assert(sizeof(int) == sizeof(long int), "sizeof int and sizeof long must be equal");

	Matrix<int, 10, 5> m1; //ok
	Matrix<std::string, 3, 4> m2; //invalid
	Matrix<double, 10, 0> m3; //invalid
}
