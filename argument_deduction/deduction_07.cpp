template <typename T>
class TypeTeller;


template <typename T>
void func(T&) 
{
	TypeTeller<T> x;
}

int foo(double);

int main()
{
	func(foo);  // T is int(double)
}
