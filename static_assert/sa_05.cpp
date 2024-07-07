#include <type_traits>
#include <string>

static_assert(sizeof(void*) == 4, "32-bit adresleme gerekli!");
static_assert(sizeof(void*) == 8, "64-bit adresleme gerekli!");

template <typename T, int Row, int Col>
struct Matrix {
	static_assert(Row > 0, "Satir sayisi pozitif bir deger olmali!");
	static_assert(Col > 0, "Sutun sayisi pozitif bir deger olmali!");
	static_assert(Row > Col, "Satir sayisi sutun sayisindan buyuk olmali!");
	//...
};

int main()
{

	static_assert(sizeof(int) == sizeof(long int), "int ve long ayni sizeof degerinde olmali");

	Matrix<int, 10, 5> m1; //ok
	Matrix<std::string, 3, 4> m2; //gecersiz
	Matrix<double, 10, 0> m3; //gecersiz
}
