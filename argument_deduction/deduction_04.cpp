template <typename T>
void func(T& x);

int main()
{
	int x = 10;
	int& r{ x };
	const int cx = 23;
	const int& cr{ cx };

	//func(10); //gecersiz
	func(x); // T is int
	func(r); // T is int
	func(cx); // T is const int
	func(cr); // T is const int
}
