template <typename T>
void func(T& x, T& y);

int main()
{
	int a[3]{};
	const int b[3]{1, 2, 3};
	int c[3]{1, 2, 3};
	int d[4]{1, 2, 3, 4};

	//func(a, b); //gecersiz
	func(a, c);
	//func(a, d); //gecersiz
	func("ahmet", "halil"); //gecerli
	//func("ahmet", "mehmet"); //gecersiz
}
