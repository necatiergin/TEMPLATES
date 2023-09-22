template <typename T>
void func(T& x);

int main()
{
	int a[3]{};
	const int ca[] = { 1, 3, 5, 7, 9 };
	int* p{ a };
	const int* cp{ ca };

	func(a); // T is int[3]
	func(ca); // T is const int[3]
	func(p); // T is int *
	func(cp); // T is const int *
	func("deniz"); // T is const char[6]
}
