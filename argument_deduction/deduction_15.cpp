template <typename R, typename P>
void func(R(*)(P));

int foo(double);

int main()
{
	func(foo);
	//func([](int x) {return x; }); //invalid
	func(+[](int x) {return x; }); //valid  - positive lambda idiom
}
