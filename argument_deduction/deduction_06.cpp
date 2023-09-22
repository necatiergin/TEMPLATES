template <typename T>
void func(T& x, T& y);

int main()
{
	int a[3]{};
	const int b[3]{1, 2, 3};
	int c[3]{1, 2, 3};
	int d[4]{1, 2, 3, 4};

	//func(a, b); //invalid
	func(a, c);
	//func(a, d); //invalid
	func("albert", "george"); //valid
	//func("tom", "alvin"); //invalid
}
