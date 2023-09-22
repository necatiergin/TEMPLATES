template <typename T>
void func(T x);


int main()
{
	const int cx = 10;
	int y = 10;
	int& r = y;
	const int& cr = cx;

	func(12); //T is int
	func(y); //T is int
	func(r); //T is int
	func(cr); //T is int
}
