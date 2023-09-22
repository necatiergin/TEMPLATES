template <typename R, typename P>
void func(R(*)(P));

int foo(double);

int main()
{
	func(foo);
	//func([](int x) {return x; }); //gecersiz
	func(+[](int x) {return x; }); //gecerli  - positive lambda idiom
}
