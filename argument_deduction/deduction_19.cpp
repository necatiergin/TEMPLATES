template <typename T>
void func(T = 0);

int main()
{
	int x{20};

	func(20);  //T is int
	func(2.0); //T is double
	func(&x); //T is int*
	//func();  // invalid
}
