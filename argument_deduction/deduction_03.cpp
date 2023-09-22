template <typename T>
void func(T x);

int foo(double);

int main()
{
	func(&foo);  //T is int (*)(double)
	func(foo);   //T is int (*)(double)
}
